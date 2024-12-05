#pragma once

#include"Task.h"

class Core {
	bool Busy;				//зан€то €дро или нет
	int CurrentTaskID;		//ID текущей задачи, выполн€емой на €дре
	int CurrentStep;		// оличество тактов до окончани€ текущей задачи
	int IdleCycle;			// аоличество тактов просто€
public:
	Core();
	void setTask(Task t);
	void cycle();
	int getIdleCycle() const;
	bool isBusy() const;
};