#include"Model.h"

Model::Model(int CoreNum) {
	cpu = CPU(CoreNum);
	ExecutionQueue = LLQueue<Task>();
}
void Model::addTask(Task t) {
	try {
		ExecutionQueue.push(t);
		TasksCnt++;
	}
	catch(EPushInFullQueue e){ }
}
void Model::startExec() {
	CyclesCnt++;
	try {
		Task tmp = ExecutionQueue.pop();
		try {
			cpu.cycle();

			//пересчет выполненных задач
			int cdtcnt = cpu.getTasksOnWorkCnt();
			if (cdtcnt > OldDoneTasks) {
				DoneTasksCnt += cdtcnt - OldDoneTasks;
			}
			OldDoneTasks = cdtcnt;

			cpu.setTask(tmp);
		}
		catch (ENotEnoughCores exc) {
			MissedTasks++;
			ExecutionQueue.push(tmp);
		}
	}
	catch (EPopFromEmptyQueue exc) {}
}

int Model::getCyclesCnt() const noexcept { return CyclesCnt; }
int Model::getMissedTasksCnt() const noexcept { return MissedTasks; }
int Model::getDoneTasksCnt() const noexcept { return DoneTasksCnt; }
int Model::getTasksCnt() const noexcept { return TasksCnt; }
Core& Model::getCore(int index) { return cpu.getCore(index); }
int Model::getIdleCycles() const { return cpu.getIdleCycles(); }
