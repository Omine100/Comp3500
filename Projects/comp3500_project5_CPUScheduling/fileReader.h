/*
* I think that this file is pretty self-explanatory, but just in case...
* It reads files.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct task {
    int executionTime;
    int arrivalTime;
    int waitingTime;
    int responseTime;
    int turnaroundTime;
};

void fileReader(string fileName) {
    string line;
    ifstream file (fileName);
    
    if (file.is_open()) {
        int i = 0;
        task tasks[10000];

        while (getline(file, line)) {
            tasks[i] = {stoi(line.substr(2, 3)), stoi(line.substr(4, 5)), 0, 0, 0};
        }

        file.close();
    } else {
        cout << "Unable to open file";
    }
}