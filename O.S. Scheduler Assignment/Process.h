#pragma once
class Process
{
private:
	int PID;
	int burstTime;
	int waitingTime;
	int arrivalTime;
	int priority;

public:
	Process(int id, int bTime, int pr) : PID(id), burstTime(bTime), priority(pr) {}
	Process();
	~Process();
	int getID() { return PID; }

	int getBurstTime() { return burstTime; }
	int getWaitingTime() { return waitingTime; }
	int getArrivalTime() { return arrivalTime; }
	int getPriority() { return priority; }
	void setID(int id);
	void setBurstTime(int bTime);
	void setWaitingTime(int wTime);
	void setArrivalTime(int aTime);
	void setPriority(int pr);
};

