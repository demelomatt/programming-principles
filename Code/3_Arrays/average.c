//calculate the average of n numbers

#include <stdio.h>
#define SIZE 5

int main(void){

    int i, a, sum = 0, arr[SIZE];
    float avg;

    for (i = 0; i < SIZE; i++){
        printf("Input the %d° value: ", i + 1);
        scanf("%d", &a);
        arr[i] = a;
    }

    for (i = 0; i < SIZE; i++){
        sum += arr[i];
    }

    avg = (float) sum / SIZE;
    printf("Average: %1.1f", avg);
    return 0;
}
