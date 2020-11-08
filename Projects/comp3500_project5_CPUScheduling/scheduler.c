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
typedef struct stat {
    u_int waiting_time;
    u_int turnaround_time;
    u_int response_time;
} stats;

void fcfs_policy(task_t task_array[], stats stats_array[], int finish_array[], int count) {
    //Variables
    int process, burstCount, timeCount = 0;

    for (process = 0; process < count; process++) {
        //Inserting waiting time for process
        stats_array[process].waiting_time = timeCount;

        for (burstCount = 0; burstCount < task_array[process].burst_time; burstCount++) {
           printf("<time %d> process %d is running\n", timeCount, task_array[process].pid);
           timeCount = timeCount+1;
        }

        //Inserting turnaround time for process
        stats_array[process].turnaround_time = timeCount;
        printf("<time %d> process %d is finished...\n", timeCount, task_array[process].pid);
    }
    printf("<time %d> All processes finish ......\n", timeCount);
}

void rr_policy(task_t task_array[], stats stats_array[], int finish_array[], int count, int time_quantum) {
    printf("Testing RR\n");
}

void srtf_policy(task_t task_array[], stats stats_array[], int finish_array[], int count) {
    printf("Testing SRTF\n");
}