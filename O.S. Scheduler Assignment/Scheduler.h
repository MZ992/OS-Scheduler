#pragma once
#include "Process.h"

class Scheduler
{
private:
	int totalWaitingTime;
	int numberOfProcesses;
	Process x;
public:
	Scheduler(Process[]);
	~Scheduler();
	void FCFS();
	void SJF();
	void PriorityP();
	void PriorityNP();
	void RoundRobin();
	void setTotalWaitingTime(int time) const;
	float calculateAverageWaitingTime();
	void execute();
};

