#pragma once

#include<random>

class Task {
	int CoreCnt;	//���������� ����, ����������� ��� �������� ������
	int CycleCnt;	//���������� ������, ����������� ��� �������� ������
	int Id;			//ID ������
public:
	Task(int Id = -1, int upperBoundCores = 6, int upperBoundCycles = 10,
		int lowerBoundCores = 1, int lowerBoundCycles = 1);
	int getCoreCnt() const;
	int getCycleCnt() const;
	int getID() const;

};

