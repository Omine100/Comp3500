/*
* This file has all the different scheduling policies.
* It takes an input from input.c and sends data to computeState.c
*/

void policyPicker(int type) {
    if (type == 1) {
        fcfs_policy();
    } else if (type == 2) {
        rr_policy();
    } else if (type == 3) {
        srtf_policy();
    }
}

void fcfs_policy() {
    printf("\n\nTesting FCFS");
}

void rr_policy() {
    printf("\n\nTesting RR");
}

void srtf_policy() {
    printf("\n\nTesting SRTF");
}