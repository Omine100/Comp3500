/*
* This is where the program will get input from the user.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

//Function: Reading the users input
void inputReader();
string inputText(string section);
string getFileText();
string getPolicyText();
int getTimeQuantumText();

//Method: Reading the users input
void inputReader() {
    cout << "\t\tWelcome to the CPU Scheduler\n";
    cout << "\nThis is where you can input files into the scheduler.\n" << "Most files are of the format \'task_list_file [FCFS|RR|SRTF] [time_quantum]\'.\n";
    cout << "\tThe [time_quantum] is only used in the case of RR\n\n";
}

string getFileNameText() {
    return inputText("file name");
}

string getPolicyTypeText() {
    return inputText("policy type");
}

int getTimeQuantumText() {
    return stoi(inputText("time quantum"));
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