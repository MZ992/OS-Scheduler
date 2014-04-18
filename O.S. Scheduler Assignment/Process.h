#pragma once
#include <string>

class Process
{
private:
	std::string PID;
	int burstTime;
	int waitingTime;
	int arrivalTime;
	int priority;
	int finishTime;
	int turnArnoundTime;

public:
	//Process(int id, int bTime, int pr) : PID(id), burstTime(bTime), priority(pr) {}
	Process();
	~Process();
	std::string getID() { return PID; }
	int getBurstTime() { return burstTime; }
	int getWaitingTime() { return waitingTime; }
	int getArrivalTime() { return arrivalTime; }
	int getPriority() { return priority; }
	int getFinishTime() { return finishTime; }
	int getTurnaroundTime() { return turnArnoundTime; }
	void setID(std::string id);
	void setBurstTime(int bTime);
	void setWaitingTime(int wTime);
	void setArrivalTime(int aTime);
	void setPriority(int pr);
	void setFinishTime(int time);
	void setTurnAroundTime(int tatime);
};

