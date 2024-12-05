#include"Core.h"

Core::Core() {
	Busy = false;
	CurrentTaskID = CurrentStep = -1;
	IdleCycle = 0;
}

void Core::setTask(Task t) {
	if (CurrentTaskID == -1) {
		Busy = true;
		CurrentTaskID = t.getID();
		CurrentStep = t.getCycleCnt();
	}
}

void Core::cycle() {
	if (Busy) {
		CurrentStep--;
		if (CurrentStep == 0) {
			Busy == false;
			CurrentTaskID = -1;
		}
	}
	else {
		IdleCycle++;
	}
}

int Core::getIdleCycle() const { return IdleCycle; }
bool Core::isBusy() const { return Busy; }
