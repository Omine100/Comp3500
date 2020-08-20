#include <stdio.h>
#include <math.h>

int main() {
    printf("Matthew's Average Square Collector");

    double sqrtArray[10], sum, average;
    
    int i = 0;
    while (i < 10) {
        int value;
        printf("\n\tEnter a number: ");
        scanf("%d", &value);
        printf("\tYou entered: %d", value);
        sqrtArray[i] = sqrt((value));
        sum = sum + sqrtArray[i];
        i++;
    }

    average = sum / 10;
    printf("\nAverage of squares: %f", average);
}