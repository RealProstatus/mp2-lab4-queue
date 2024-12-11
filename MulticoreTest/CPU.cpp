#include"CPU.h"

CPU::CPU(int CoreNum) {
	NotBusyCoreCnt = CoreNum;
	Cores = std::vector<Core>(CoreNum);
	TasksOnWork = std::vector<pair>(CoreNum);
}

void CPU::cycle() {
	int tmp1 = 0;

	for (int i = 0; i < Cores.size(); i++) {
		Cores[i].cycle();
		if (!(Cores[i].isBusy())) tmp1++;
	}
	NotBusyCoreCnt = tmp1;
}

void CPU::setTask(Task t) {
	if (t.getCoreCnt() > NotBusyCoreCnt) {
		throw ENotEnoughCores();
	}
	else {
		int counter = t.getCoreCnt();
		for (int i = 0; i < Cores.size(); i++) {
			if (!Cores[i].isBusy() && counter>0) {
				Cores[i].setTask(t);
				counter--;
			}
		}

		int tmp = 0;//пересчет свободных ядер
		for (int i = 0; i < Cores.size(); i++) {
			if (!Cores[i].isBusy()) tmp++;
		}
		NotBusyCoreCnt = tmp;
	}
}

int CPU::getTasksOnWorkCnt() const {
	std::vector<int> ids;
	for (Core core : Cores) {
		if (core.getCurrentTaskID() != -1) {
			ids.push_back(core.getCurrentTaskID());
		}
	}
	std::set<int> uniqueids(ids.begin(), ids.end());
	return uniqueids.size();
}

Core& CPU::getCore(int index) {
	if (index >= 0 && index < Cores.size())
		return Cores[index];
	else
		throw 2531;
}

int CPU::getIdleCycles() const {
	int sum = 0;
	for (Core core : Cores) {
		sum += core.getIdleCycle();
	}
	return sum;
}