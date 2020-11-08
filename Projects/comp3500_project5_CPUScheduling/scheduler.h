#include "scheduler.c"

#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_

void fcfs_policy(task_t task_array[], int finish_array[], int count);

void rr_policy(task_t task_array[], int finish_array[], int count, int time_quantum);

void srtf_policy(task_t task_array[], int finish_array[], int count);

#endif