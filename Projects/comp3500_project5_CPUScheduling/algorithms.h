/*
* Alrighty, this is my third time trying to get these files set up, so here we go!
* There are three algorithms that we have to implement for this scheduler:
*                   FCFS, SRTF, RR
* Basically... That is what this file is dedicated to
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

void algorithmPicker(string policyType, task * tasks);
void firstComeFirstServe(task * tasks);
void shortestRemainingTimeFirst(task * tasks);
void roundRobin(task * tasks);

void algorithmPicker(string policyType, task * tasks) {
    if (policyType == "FCFS") {
        firstComeFirstServe(tasks);
    } else if (policyType == "SRTF") {
        shortestRemainingTimeFirst(tasks);
    } else {
        roundRobin(tasks);
    }
}

void firstComeFirstServe(task * tasks) {
    //for (int i = tasks[i].arrivalTime; i < tasks.size(); i++) {
    //  while (arrivalTime = arrivalTime) {
    //        
    //  }   
    //}
}

void shortestRemainingTimeFirst(task * tasks) {}

void roundRobin(task * tasks) {}