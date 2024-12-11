#pragma once

#include"../mp2-lab4-queue/TQueue.h"
#include"CPU.h"
#include<set>

class Model {
	int TasksCnt = 0;
	int DoneTasksCnt = 0;
	int CyclesCnt = 0;
	int MissedTasks = 0;
	int OldDoneTasks = 0;

	CPU cpu;
	TQueue<Task> ExecutionQueue;

public:
	Model(int CoreNum = 6);

	void addTask(Task t);
	void startExec();

	int getCyclesCnt() const noexcept;
	int getMissedTasksCnt() const noexcept;
	int getDoneTasksCnt() const noexcept;
	int getTasksCnt() const noexcept;
	Core& getCore(int index);
	int getIdleCycles() const;
};