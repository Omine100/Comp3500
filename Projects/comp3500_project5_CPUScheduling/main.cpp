/*
* This is the heart of the program.
* Everything that the user wants to do will come through here.
*/

#include "inputReader.h"
#include "algorithms.h"
#include "fileReader.h"
#include "outputPrinter.h"
using namespace std;

//Method: Start of the project
int main() {
    inputReader();
    string fileName = getFileNameText();
    string policyType = getPolicyTypeText();
    int timeQuantum = getTimeQuantumText();

    task * tasks = fileReader(fileName);

    algorithmPicker(policyType, tasks);

    outputPrinter();
}