/*
* I think that this file is pretty self-explanatory, but just in case...
* It reads files.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct task {
    int pid;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int responseTime;
    int turnaroundTime;
};

task fileReader(string fileName) { //Maybe change this to spit out one at a time, line reader?
    string line;
    ifstream file (fileName);
    task tasks[10000];
    
    if (file.is_open()) {
        int i = 0;     

        while (getline(file, line)) {
            tasks[i] = {stoi(line.substr(0, 1)), stoi(line.substr(2, 3)), stoi(line.substr(4, 5)), 0, 0, 0};
            cout << "\npid: " << tasks[i].pid << " arrival time: " << tasks[i].arrivalTime << " burst time: " << tasks[i].burstTime << " waiting time: " << tasks[i].waitingTime;
        }

        file.close();
    } else {
        cout << "Unable to open file";
    }

    return tasks;
}