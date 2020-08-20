#include <stdio.h>

int main() {
    printf("Matthew's Average Sqvauare Collector");

    int sqrtArray[10];
    
    for (int i = 0; i < 10; i++) {
        int value;
        printf("\n\tEnter a number: ");
        scanf("%d", &value);
        array[i] = sqrt(double value) / 10;
        printf("\n\tYou entered: %d", value);
        if (i = 9) {
            int sum;
            for (int i = 0; i < 10; i++) {
                sum = sqrtArray[i] + sum;
            }
            printf("\n\nAverage of square roots: ");
            printf(sum);
        }
    }
}