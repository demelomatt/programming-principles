//calculate the average of n numbers

#include <stdio.h>
#define n 5

int main(void){

    int i,a,sum = 0,arr[n];
    float avg;

    for (i=0;i<n;i++){
        printf("Input the %d° value: ",i + 1);
        scanf("%d",&a);
        arr[i] = a;
    }

    for (i=0;i<n;i++){
        sum+=arr[i];

    }
    avg = (float) sum/n;
    printf("Average: %1.1f",avg);
    return 0;
}
