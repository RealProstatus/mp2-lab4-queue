#pragma once

#include"Task.h"

class Core {
	bool Busy;				//������ ���� ��� ���
	int CurrentTaskID;		//ID ������� ������, ����������� �� ����
	int CurrentStep;		//���������� ������ �� ��������� ������� ������
	int IdleCycle;			//����������� ������ �������
public:
	Core();
	void setTask(Task t);
	void cycle();
	int getIdleCycle() const;
	bool isBusy() const;
};