#pragma once

#include"Exception.h"

template<class T>
class TQueue {
	T* pMem;
	int size;
	int tail;
	int head;
	int cnt;
public:
	TQueue(int _size = 32) {
		if (_size <= 0) throw 2531;
		pMem = new T[_size];
		size = _size;
		cnt = head = 0;
		tail = -1;
	}

	TQueue(const TQueue<T>& q) {
		pMem = new T[q.size];
		size = q.size;
		tail = q.tail;
		head = q.head;
		cnt = q.cnt;

		if (tail >= head) {
			for (int i = head; i <= tail; i++) pMem[i] = q.pMem[i];
		}
		else {
			for (int i = head; i < size; i++) pMem[i] = q.pMem[i];
			for (int i = 0; i <= tail; i++) pMem[i] = q.pMem[i];
		}
	}

	~TQueue(){ delete[] pMem; }

	//-------------------------------------------------------------------

	bool isEmpty() const { return cnt == 0; }
 	bool isFull() const { return cnt == size; }
	T front() {
		if (!(this->isEmpty()))
			return pMem[head];
		else
			throw EFrontInEmptyQueue();
	}
	T back() {
		if (!(this->isEmpty()))
			return pMem[tail];
		else
			throw EBackInEmptyQueue();
	}

	void push(T val) {
		if (this->isFull()) throw EPushInFullQueue();

		pMem[(tail + 1) % size] = val;
		tail = (tail + 1) % size;
		cnt++;
	}

	T pop() {
		if (this->isEmpty()) throw EPopFromEmptyQueue();

		int ind = head;
		head = (head + 1) % size;
		cnt--;
		return pMem[ind];
	}

	bool operator==(const TQueue<T>& q) const {
		if (this == &q) return true;
		if (cnt != q.cnt) return false;

		for (int i = 0; i < cnt; i++) {
			if (pMem[(head + i) % size] != q.pMem[(q.head + i) % q.size])
				return false;
		}
		return true;
	}

	bool operator!=(const TQueue<T>& q) const {
		return !(this->operator==(q));
	}
};