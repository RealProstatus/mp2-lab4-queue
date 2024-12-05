#pragma once

#include"Core.h"
#include<vector>
#include"../mp2-lab4-queue/Exception.h"


class CPU {
	std::vector<Core> Cores;
	int NotBusyCoreCnt;
public:
	CPU(int CoreNum = 6);
	void cycle();
	void setTask(Task t);
};