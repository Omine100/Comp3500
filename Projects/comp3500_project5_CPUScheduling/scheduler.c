/*
* This file has all the different scheduling policies.
* It takes an input from input.c and sends data to computeState.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int u_int;
typedef struct task {
    u_int pid;    
    u_int arrival_time;   
    u_int burst_time;
} task_t;

void fcfs_policy(task_t task_array[], int finish_array[], int count) {
    printf("Testing FCFS\n");
}

void rr_policy(task_t task_array[], int finish_array[], int count, int time_quantum) {
    printf("Testing RR\n");
}

void srtf_policy(task_t task_array[], int finish_array[], int count) {
    printf("Testing SRTF\n");
}