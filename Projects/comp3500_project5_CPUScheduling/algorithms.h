/*
* Alrighty, this is my third time trying to get these files set up, so here we go!
* There are three algorithms that we have to implement for this scheduler:
*                   FCFS, SRTF, RR
* Basically... That is what this file is dedicated to
*/

void firstComeFirstServe();
void shortestRemainingTimeFirst();
void roundRobin();

void algorithmPicker(int policyType) {
    if (policyType == 0) {
        firstComeFirstServe();
    } else if (policyType == 1) {
        shortestRemainingTimeFirst();
    } else {
        roundRobin();
    }
}

void firstComeFirstServe() {
}

void shortestRemainingTimeFirst() {}

void roundRobin() {}