/*
* This is the heart of the program.
* Everything that the user wants to do will come through here.
* It is basically the "main.c" of this program.
*/

#include <iostream>
#include <string>
#include "outputPrinter.h"
using namespace std;

//Function: Reading the users input
void inputReader();

//This is going to be the structure for the task simulation
struct task {
    int arrival_time;
    int burst_time;
    bool isFinished;
};

//Method: Start of the project
int main() {
    inputReader();
    outputPrinter();
}

//Method: Reading the users input
void inputReader() {
    string fileName;

    cout << "\t\tWelcome to the CPU Scheduler\n";
    cout << "\nThis is where you can input files into the scheduler.\n" << "Most files are of the format \'task_list_file [FCFS|RR|SRTF] [time_quantum]\'.\n";
    cout << "\tThe [time_quantum] is only used in the case of RR";

    while (fileName.empty()) {
        cout << "\nEnter file name: ";
        getline(cin, fileName);

        if (fileName.empty()) {
            cout << "Please enter a non-empty file name.";
        }
    }
}