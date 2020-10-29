/*
* This is the heart of the program.
* Everything that the user wants to do will come through here.
* It is basically the "main.c" of this program.
*/

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include "algorithms.h"
#include "fileReader.h"
#include "outputPrinter.h"
using namespace std;

int main(int argc, char** argv) {
    string fileName;
    int policyType; //FCFS = 0; SRTF = 1; RR = 2
    int timeQuantum;

    if (strcmp(argv[0], "scheduler")) {
        cout << "Usage: scheduler task_list_file [FCFS|RR|SRTF] [time_quantum]" << argv[1] << endl;
    } else {
        fileName = argv[2];
        if (argv[2] == "FCFS") {
            int policyType = 0;
        } else if (argv[2] == "SRTF") {
            int policyType = 1;
        } else if (argv[2] == "RR") {
            int policyType = 2;
            timeQuantum = stoi(argv[2]);
        } else {
            cout << "Unsupported policy type.";
        }

        cout << "Scheduling Policy: " << argv[1];
        fileReader(fileName);
        // cout << "\n==================================================================";
        // algorithmPicker(policyType);
        // cout << "\n==================================================================";
        // outputPrinter();
        // cout << "\n==================================================================";
    }
}