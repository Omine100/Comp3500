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
    int waiting_time;
    int turnaround_time;
    int response_time;
} stats;

stats* fcfs_policy(task_t task_array[], stats stats_array[], int count) {
    //Variables
    int process, burstCount, timeCount = 0;

    //Cycling through each process
    for (process = 0; process < count; process++) {
        //Inserting waiting time for process
        stats_array[process].waiting_time = timeCount - task_array[process].arrival_time;
        stats_array[process].response_time = timeCount - task_array[process].arrival_time;
        //Letting process go for as long as necessary
        for (burstCount = 0; burstCount < task_array[process].burst_time; burstCount++) {
           printf("<time %d> process %d is running\n", timeCount, task_array[process].pid);
           timeCount = timeCount+1;
        }
        //Inserting turnaround time for process
        stats_array[process].turnaround_time = timeCount - task_array[process].arrival_time;
        printf("<time %d> process %d is finished...\n", timeCount, task_array[process].pid);
    }
    printf("<time %d> All processes finish ......\n", timeCount);

    return stats_array;
}

stats* rr_policy(task_t task_array[], stats stats_array[], int finish_array[], int count, int time_quantum) {
    printf("Testing RR\n");
    return stats_array;
}

stats* srtf_policy(task_t task_array[], stats stats_array[], int finish_array[], int count) {
    //Variables
    int process, burstCount, timeCount = 0, complete = 0, minTime = INT_MAX, shortest = 0, check = 0;
    int remainingTime[count];

    for (process = 0; process < count; process++) {
        remainingTime[process] = task_array[process].burst_time;
    }

    while(complete != count) {
        for (process = 0; process < count; process++) {
            if ((task_array[process].arrival_time <= timeCount) && (remainingTime[process] > 0) && (remainingTime[process] < minTime)) {
                minTime = remainingTime[process];
                shortest = process;
                check = 1;
            }
        }

        if (check == 0) {
            timeCount++;
            continue;
        }

        remainingTime[shortest]--;
        minTime = remainingTime[shortest];
        if (minTime == 0) {
            minTime = INT_MAX;
        }

        printf("<time %d> process %d is running\n", timeCount, task_array[shortest].pid);
        if (remainingTime[shortest] == 0) {
            printf("<time %d> process %d is finished...\n", timeCount, task_array[shortest].pid);
            complete++;
            check = 0;
            stats_array[shortest].waiting_time = timeCount - task_array[shortest].burst_time - task_array[shortest].arrival_time;
            stats_array[shortest].response_time = timeCount - task_array[shortest].burst_time - task_array[shortest].arrival_time;
            stats_array[shortest].turnaround_time = timeCount - task_array[shortest].arrival_time;
        }
        timeCount++;
    }
    printf("<time %d> All processes finish ......\n", timeCount);

    return stats_array;
}

stats* averageCalculator(stats stats_array[], int count) {
    //Calculating and preparing average data
    int totalWaitingTime = 0, totalTurnaroundTime = 0, totalResponseTime = 0;
    for (int i = 0; i < (count); i++) {
        totalWaitingTime = totalWaitingTime + stats_array[i].waiting_time;
        totalTurnaroundTime = totalTurnaroundTime + stats_array[i].turnaround_time;
        totalResponseTime = totalResponseTime + stats_array[i].response_time;
    }
    double averageWaitingTime = totalWaitingTime / count;
    double averageTurnaroundTime = totalTurnaroundTime / count;
    double averageResponseTime = totalResponseTime / count;
    stats_array[count + 1].waiting_time = averageWaitingTime;
    stats_array[count + 1].turnaround_time = averageTurnaroundTime;
    stats_array[count + 1].response_time = averageResponseTime;

    return stats_array;
}