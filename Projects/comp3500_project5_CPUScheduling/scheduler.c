/*
* This file has all the different scheduling policies.
* It takes an input from input.c and sends data to computeState.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TIME 10000

typedef unsigned int u_int;
typedef struct task {
    u_int pid;    
    u_int arrival_time;   
    u_int burst_time;
} task_t;

void fcfs_policy(task_t task_array[], int finish_array[], int count) {
    int process, burstCount, timeCount = 0;
    for (process = 0; process < count; process++) {
        for (burstCount = 0; burstCount < task_array[process].burst_time; burstCount++) {
           printf("<time %d> process %d is running\n", timeCount, task_array[process].pid);
           timeCount = timeCount+1;
        }
        printf("<time %d> process %d is finished...\n", timeCount, task_array[process].pid);
    }
    printf("<time %d> All processes finish ......\n", timeCount);

    //Creating a waiting time array and calculating values
    int waitingTime[count];
    waitingTime[0] = 0;
    for (int i = 1; i < count; i++) {
        waitingTime[i] = task_array[i-1].burst_time + waitingTime[i-1];
    }

    //Creating a turnaround time array and calculating values
    int turnaroundTime[count];
    for (int i = 1; i < count; i++) {
        turnaroundTime[i] = waitingTime[i] + task_array[i].burst_time;
    }
}

void rr_policy(task_t task_array[], int finish_array[], int count, int time_quantum) {
    printf("Testing RR\n");
}

void srtf_policy(task_t task_array[], int finish_array[], int count) {
    printf("Testing SRTF\n");
}