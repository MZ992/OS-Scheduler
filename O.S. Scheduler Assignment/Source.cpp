#include <iostream>
#include <string>
#include "Process.h"
#include "Scheduler.h"
#include <list>
#include <algorithm>
 using namespace std;

 void main()
 {
	 string id;
	 int n, bt, at, priority, selection;
	 Process process;
	 cout << "Please enter number of processes" << endl;
	 cin >> n;
	 list<Process> processList;
	 //Process[n] = {};
	 cout << "Choose Scheduler Type: (1 for FCFS, 2 for SJF (non-preemptive), 3 for SJF (preemptive), 4 for Priority, 5 for RR" << endl;
	 cin >> selection;
	 
	 for (int i = 0; i < n; i++)
	 {
		 
		 cout << "Enter Process " << i << " PID, Burst Time and Arrival Time" << endl;
		 cin >> id >> bt >> at;
		 process.setID(id);
		 process.setBurstTime(bt);
		 if (selection == 3 || selection == 4)
		 {
			 cout << "Enter Process " << i << " Priority" << endl;
			 cin >> priority;
			 process.setPriority(priority);
		 }
		 processList.push_back(process);
	 }

	 Scheduler ProcessScheduler(processList);
	 ProcessScheduler.chooseType(selection);
 }