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
	void FCFS(list<Process>);
	void SJF(list<Process>);
	void PriorityP(list<Process>);
	void PriorityNP(list<Process>);
	void RoundRobin(list<Process>);
	void setTotalWaitingTime(int time) const;
	float calculateAverageWaitingTime();
	void execute(list<Process>);
	void sortSJF(list<Process>);
	void sortPriority(list<Process>);
};

