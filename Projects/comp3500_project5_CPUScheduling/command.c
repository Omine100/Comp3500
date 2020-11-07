/*
* This file is for passing arguments to the program
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1 || argc > 4) {
        printf("Usage: scheduler task_list_file [FCFS|RR|SRTF] [time_quantum]\n");
    }
}