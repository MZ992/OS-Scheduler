#pragma once
#include "Process.h"
#include <list>

using namespace std;

class Scheduler
{
private:
	unsigned int totalWaitingTime;
	unsigned int numberOfProcesses;
	unsigned int remainingProcesses;
	//Process *procArr;
	list<Process> processList;
	list<Process>::iterator listIterator;
public:
	//Scheduler();
	Scheduler(list<Process> procList, unsigned int n);
	~Scheduler();
	void chooseType(unsigned int x);
	void FCFS(list<Process> procList);
	void SJF(list<Process> procList);
	void PriorityP(list<Process> procList);
	void PriorityNP(list<Process> procList);
	void RoundRobin(list<Process> procList);
	void setTotalWaitingTime(int time) const;
	float calculateAverageWaitingTime();
	void execute(Process process);
	void sortSJF(list<Process> procList);
	void sortPriority(list<Process> procList);
};

