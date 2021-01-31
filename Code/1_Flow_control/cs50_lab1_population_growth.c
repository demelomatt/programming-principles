//Determine how long it takes for a population to reach a particular size.
#include <stdio.h>

int populationGrowth(int n, int end){

    int year = 0;
    do {
        n += n/3 - n/4;
        year+= 1;
    } while (n < end);
    printf("\nPopulation after %d years: %d",year,n);

}

int main (void){

    int start, end;

    do{
        printf("Enter a staring population size greater then 8: ");
        scanf("%d",&start);

    } while (start<9);

    do{
        printf("Enter a ending population size greater then %d: ",start);
        scanf("%d",&end);
    } while (end<=start);
    populationGrowth(start,end);


    return 0;
}
