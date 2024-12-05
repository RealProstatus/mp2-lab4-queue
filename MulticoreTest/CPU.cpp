#include"CPU.h"

CPU::CPU(int CoreNum) {
	NotBusyCoreCnt = CoreNum;
}

void CPU::cycle() {
	int tmp = 0;

	for (int i = 0; i < Cores.size(); i++) {
		Cores[i].cycle();
		if (!Cores[i].isBusy()) tmp++;
	}
	NotBusyCoreCnt = tmp;
}

void CPU::setTask(Task t) {
	if (t.getCoreCnt() > NotBusyCoreCnt) {
		throw ENotEnoughCores();
	}
	else {
		for (int i = 0; i < Cores.size(); i++) {
			if (!Cores[i].isBusy()) {
				Cores[i].setTask(t);
			}
		}

		int tmp = 0;//пересчет свободных ядер
		for (int i = 0; i < Cores.size(); i++) {
			Cores[i].cycle();
			if (!Cores[i].isBusy()) tmp++;
		}
		NotBusyCoreCnt = tmp;
	}
}
