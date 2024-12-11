#pragma once

#include"Core.h"
#include<vector>
#include"../mp2-lab4-queue/Exception.h"
#include<set>

struct pair {
	int TaskId;
	int CurrentCycle;
};

class CPU {
	std::vector<Core> Cores;
	int NotBusyCoreCnt;

	std::vector<pair> TasksOnWork;
public:
	CPU(int CoreNum = 6);
	void cycle();
	void setTask(Task t);

	int getTasksOnWorkCnt() const;
	Core& getCore(int index);
	int getIdleCycles() const;
};