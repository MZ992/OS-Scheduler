#include <iostream>
#include <vector>
#include "Process.h"
#include "Scheduler.h"
#include <list>
 using namespace std;

 void main()
 {
	 int n, id, bt, priority, selection;
	 cout << "Please enter number of processes" << endl;
	 cin >> n;
	 list<Process>;
	 //Process[n] = {};
	 cout << "Choose Scheduler Type: (1 for FCFS, 2 for SJF, 3 for Priority(preemptive), 4 for Priority(non-preemptive), 5 for RR" << endl;
	 cin >> selection;
	 
	 for (int i = 0; i < n; i++)
	 {
		 cout << "Enter Process " << i << " PID, Burst time" << endl;
		 if (selection == 3 || selection == 4)
		 {
			 cout << "Enter Process " << i << " Priority" << endl;
			 cin >> 
		 }
	 }
 }