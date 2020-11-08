/*
* This is like my fourth time restarting this project, so hopefully this will go well.
* This file is completely dedicated to getting input. I know, wild right.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_NUM 32

typedef unsigned int u_int;
typedef struct task {    
    u_int pid;    
    u_int arrival_time;   
    u_int burst_time;
} task_t;

int main(int argc, char *argv[]) {
    char *file_name;
    char *policy_type;
    FILE *fp;
    task_t task_array[MAX_TASK_NUM];

    u_int i;
    u_int count;

    if (argc == 1 || argc > 4) {
        printf("Usage: scheduler task_list_file [FCFS|RR|SRTF] [time_quantum]\n");
        return EXIT_FAILURE;
    }

    file_name = argv[1];
    if (!(fp = fopen(file_name, "r"))) {
        printf("File can't be opened. Retry...\n");
        return EXIT_FAILURE;
    }

    count = 0;
    while (fscanf(fp, "%u %u %u", &task_array[count].pid, &task_array[count].arrival_time, &task_array[count].burst_time)!= EOF) {
        count++;
    }

    policy_type = argv[2];

    if (strcmp(argv[2], "FCFS") == 0) {
        printf("Testintestintesting");
    }

    printf("Scheduling Policy: %s\n", policy_type);
    printf("There are %u tasks loaded from \"%s\". ", count, file_name);
    printf("Press any key to continue ...");
    getchar();
    fclose(fp);
    printf("==================================================================\n");
    return EXIT_SUCCESS;
}