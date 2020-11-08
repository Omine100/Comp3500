#include "scheduler.c"

#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_

stats* fcfs_policy(task_t task_array[], stats stats_array[], int finish_array[], int count);

void rr_policy(task_t task_array[], stats stats_array[], int finish_array[], int count, int time_quantum);

void srtf_policy(task_t task_array[], stats stats_array[], int finish_array[], int count);

stats* averageCalculator(stats stats_array[], int count);

#endif