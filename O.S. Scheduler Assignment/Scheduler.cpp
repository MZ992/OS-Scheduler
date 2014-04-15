#include "Scheduler.h"
#include <iostream>
#include <queue>

//Scheduler::Scheduler()
//{
//
//}

Scheduler::Scheduler(queue<Process> procList, unsigned int n)
{
	totalWaitingTime = 0;
	numberOfProcesses = n;
	remainingProcesses = 
	//remainingProcesses = n;
	//listIterator = processList.begin();
	//procArr = 0;
	/*for (int i = 0; i < numberOfProcesses; i++)
	{
		//*procArr = processArray[i];

		procArr++;
	}*/
	for (listIterator = processList.begin(); listIterator != processList.end(); listIterator++)
	{
		
	}
}

void Scheduler::chooseType(unsigned int x)
{
	switch (x)
	{
	case 1:
		FCFS();
	case 2:
		SJF();
	case 3:
		PriorityP();
	case 4:
		PriorityNP();
	case 5:
		RoundRobin();
		break;
	}
}

Scheduler::~Scheduler()
{

}


void Scheduler::FCFS(queue<Process> procList)
{
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


void Scheduler::SJF(queue<Process> procList)
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


void Scheduler::PriorityP(queue<Process> procList)
{
	list[1] = Process();
}


void Scheduler::PriorityNP(queue<Process>)
{

}


void Scheduler::RoundRobin(queue<Process>)
{

}

void Scheduler::sortSJF(queue<Process>)
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

void Scheduler::sortPriority(queue<Process>)
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