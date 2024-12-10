#include"Task.h"

Task::Task(int Id, int upperBoundCores, int upperBoundCycles, 
	int lowerBoundCores, int lowerBoundCycles) {

	this->Id = Id;
	CoreCnt = rand() % (upperBoundCores - lowerBoundCores + 1) + lowerBoundCores;
	CycleCnt = rand() % (upperBoundCycles - lowerBoundCycles + 1) + lowerBoundCycles;
}

int Task::getCoreCnt() const { return CoreCnt; }
int Task::getCycleCnt() const { return CycleCnt; }
int Task::getID() const { return Id; }
