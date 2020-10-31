/*
* This is the heart of the program.
* Everything that the user wants to do will come through here.
* It is basically the "main.c" of this program.
*/

#include <cstdio>
#include <cstring>
#include "algorithms.h"
#include "fileReader.h"
#include "outputPrinter.h"
using namespace std;

//Function: Reading the users input
void inputReader();
string inputText(string section);

//Method: Start of the project
int main() {
    inputReader();
    outputPrinter();
}

//Method: Reading the users input
void inputReader() {
    string fileName;
    string policyType;
    int timeQuantum;

    cout << "\t\tWelcome to the CPU Scheduler\n";
    cout << "\nThis is where you can input files into the scheduler.\n" << "Most files are of the format \'task_list_file [FCFS|RR|SRTF] [time_quantum]\'.\n";
    cout << "\tThe [time_quantum] is only used in the case of RR\n\n";

    fileName = inputText("file");
    policyType = inputText("policy type");
    timeQuantum = stoi(inputText("time quantum"));
}

string inputText(string type) {
    string section;

    while (section.empty()) {
        cout << "Enter " << type << ": ";
        getline(cin, section);

        if (section.empty()) {
            cout << "Please enter a non-empty " << type;
        }
    }

    return section;
}