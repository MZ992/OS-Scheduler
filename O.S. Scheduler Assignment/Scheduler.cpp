#include "Scheduler.h"
#include <iostream>
//#include <queue>
#include <list>
#include <algorithm>

//Scheduler::Scheduler()
//{
//
//}

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
		cout << "Entered value is invalid, please retry..." << endl;
		break;
	}
}

Scheduler::~Scheduler()
{

}


void Scheduler::FCFS(list<Process> procList)
{
	for (unsigned int i = 0; i < numberOfProcesses; i++)
	{
		execute(procList[i]);
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
	for (int i = 0; i < numberOfProcesses; i++)
	{
		execute(procList[i]);
		remainingProcesses--;
		if (remainingProcesses == 0)
		{
			std::cout << "Total waiting time: " << totalWaitingTime << std::endl;
		}
	}
}


void Scheduler::SJFP(list<Process> procList)
{
	list[1] = Process();
}


void Scheduler::Priority(list<Process>)
{

}


void Scheduler::RoundRobin(list<Process>)
{

}

void Scheduler::sortSJF(list<Process>)
{
	int index = 1;
	int min = arr[0].getBurstTime();
	Process temp;
	for (int i = 0; i < numberOfProcesses; i++)
	{
		if (arr[i].getBurstTime() > min)
		{
			temp = arr[index];
			arr[index] = arr[i];
			index++;
		}
	}
}

void Scheduler::sortPriority(list<Process>)
{
	int index = 1;
	int min = arr[0].getPriority();
	Process temp;
	for (int i = 0; i < numberOfProcesses; i++)
	{
		if (arr[i].getPriority() > min)
		{
			temp = arr[index];
			arr[index] = arr[i];
			index++;
		}
	}
}

void Scheduler::execute(Process process)
{
	totalWaitingTime += process.getBurstTime() * remainingProcesses;
	std::cout << "Executed Process PID " << process.getID() << std::endl;
}