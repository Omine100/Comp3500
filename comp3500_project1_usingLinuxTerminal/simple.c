#include <stdio.h>

int main() {
    printf("Matthew's Average Square Collector");

    int value;
    int values[10];

    for (int i = 0; i <= 10; i++) {
        printf("\n\tEnter a value: ");
        scanf("%d", &value);
        printf("\n\tYou entered: %d", value);
        values[i] = value;
    }
    return 0;
}