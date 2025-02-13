#pragma once

#include"Exception.h"

template<class T>
struct Node {
    T val;
    Node* pNext;
};

template<class T>
class LLQueue {
    Node<T>* pFirst, * pLast;
public:
    LLQueue() {
        pFirst = pLast = nullptr;
    }

    LLQueue(const LLQueue<T>& q) {
        Node<T>* stmp = q.pFirst;
        if (stmp != nullptr) {
            pFirst = new Node<T>;
            pFirst->val = stmp->val;
            pFirst->pNext = nullptr;

            stmp = stmp->pNext;

            Node<T>* prev = pFirst;
            while (stmp != nullptr) {
                Node<T>* newnode = new Node<T>;
                newnode->val = stmp->val;
                newnode->pNext = nullptr;
                prev->pNext = newnode;

                stmp = stmp->pNext;
                prev = prev->pNext;
            }
            pLast = prev;
        }
        else {
            pFirst = pLast = nullptr;
        }
    }

    ~LLQueue() {
        while (pFirst != nullptr) {
            Node<T>* tmp = pFirst;
            pFirst = pFirst->pNext;
            delete tmp;
        }
    }

    //-------------------------------------------------------------------

    bool isEmpty() const {
        return pFirst == nullptr;
    }

    bool isFull() const {
        try {
            Node<T>* tmp = new Node<T>;
            delete tmp;
            return false;
        }
        catch(std::bad_alloc){
            return true;
        }
    }

    void push(T elem) {
        if (this->isFull()) throw EPushInFullQueue();

        if (pLast == nullptr) {
            pLast = pFirst = new Node<T>;
            pLast->val = elem;
            pLast->pNext = nullptr;
        }
        else {
            Node<T>* newnode = new Node<T>;
            newnode->val = elem;
            newnode->pNext = nullptr;

            pLast->pNext = newnode;
            pLast = newnode;
        }
    }

    T pop() {
        if (this->isEmpty()) throw EPopFromEmptyQueue();

        T res = pFirst->val;
        Node<T>* tmp = pFirst;
        pFirst = pFirst->pNext;
        delete tmp;

        if (pFirst == nullptr) 
            pLast = nullptr;
        return res;
    }

    bool operator==(const LLQueue<T>& q) const {
        if (this == &q) 
            return true;

        Node<T>* tmp = pFirst;
        Node<T>* stmp = q.pFirst;
        while ((tmp != nullptr) && (stmp != nullptr)) {
            if (tmp->val != stmp->val) 
                return false;

            tmp = tmp->pNext;
            stmp = stmp->pNext;
        }

        return tmp == stmp;
    }

    T front() {
        if()
    }
};
