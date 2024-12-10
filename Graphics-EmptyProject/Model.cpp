#include"Model.h"

Model::Model(int CoreNum) {
	cpu = CPU(CoreNum);
	ExecutionQueue = TQueue<Task>();
}
void Model::addTask(Task t) {
	ExecutionQueue.push(t);
}
void Model::startExec() {
	try {
		Task tmp = ExecutionQueue.pop();
		try {
			cpu.cycle();
			cpu.setTask(tmp);
		}
		catch (ENotEnoughCores exc) {
			ExecutionQueue.push(tmp);
		}
	}
	catch (EPopFromEmptyQueue exc) {}
}

void Model::setCoreCnt(int cnt) {
	if (cnt <= 0) throw 2531;
	cpu.setCores(cnt);
}