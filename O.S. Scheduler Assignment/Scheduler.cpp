#include "Scheduler.h"
#include <iostream>
//#include <queue>
#include <list>
#include <algorithm>

Scheduler::Scheduler()
{
	totalWaitingTime = 0;
	numberOfProcesses = 0;
	remainingProcesses = 0;
	//processList = procList;
}

Scheduler::~Scheduler()
{

}

Scheduler::Scheduler(list<Process> procList)
{
	totalWaitingTime = 0;
	numberOfProcesses = procList.size();
	remainingProcesses = numberOfProcesses;
	processList = procList;
}

void Scheduler::chooseType(unsigned int x)
{
	switch (x)
	{
	case 1:
		FCFS(processList);
	case 2:
		SJF(processList);
	case 3:
		SJFP(processList);
	case 4:
		Priority(processList);
	case 5:
		RoundRobin(processList);
	default:
		//cout << "Entered value is invalid, please retry..." << endl;
		break;
	}
}


void Scheduler::FCFS(list<Process> procList)
{
	for (list<Process>::iterator it = procList.begin(); it != procList.end(); it++)
	{
		execute(*it);
		remainingProcesses--;
		if (remainingProcesses == 0)
		{
			std::cout << "Total waiting time: " << totalWaitingTime << std::endl;
		}
	}
}


void Scheduler::SJF(list<Process> procList)
{
	sortSJF(procList);
	list<Process>::iterator iterator = procList.begin();
	for (unsigned int i = 0; i < numberOfProcesses; i++)
	{
		execute(*iterator);
		remainingProcesses--;
		iterator++;
		if (remainingProcesses == 0)
		{
			std::cout << "Total waiting time: " << totalWaitingTime << std::endl;
		}
		if (iterator == procList.end())
		{
			break;
		}
	}
}


void Scheduler::SJFP(list<Process> procList)
{
	//list[1] = Process();
}


void Scheduler::Priority(list<Process> procList)
{

}


void Scheduler::RoundRobin(list<Process> procList)
{

}

void Scheduler::sortSJF(list<Process> procList)
{
	list<Process>::iterator index = procList.begin()++;
	int min = procList.begin()->getBurstTime();
	Process temp;
	for (list<Process>::iterator it = procList.begin(); it != procList.end(); it++)
	{
		if (it->getBurstTime() > min)
		{
			temp = *index;
			*index = *it;
			index++;
		}
	}
}

void Scheduler::sortPriority(list<Process> procList)
{
	list<Process>::iterator index = procList.begin()++;
	int min = procList.begin()->getPriority();
	Process temp;
	for (list<Process>::iterator it = procList.begin(); it != procList.end(); it++)
	{
		if (it->getPriority() > min)
		{
			temp = *index;
			*index = *it;
			index++;
		}
	}
}

void Scheduler::execute(Process process)
{
	std::cout << "Executed Process " << process.getID() << std::endl;
	totalWaitingTime += process.getBurstTime() * (remainingProcesses-1);
}