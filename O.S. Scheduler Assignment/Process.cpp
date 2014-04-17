#include "Process.h"
#include <string>


/*Process::Process(int id, int bTime, int pr)
{
	
}*/


/*Process::~Process()
{
}*/

void Process::setID(std::string id)
{
	PID = id;
}

void Process::setBurstTime(int bTime)
{
	burstTime = bTime;
}

void Process::setWaitingTime(int wTime)
{
	waitingTime = wTime;
}

void Process::setArrivalTime(int aTime)
{
	arrivalTime = aTime;
}

void Process::setPriority(int pr)
{
	priority = pr;
}