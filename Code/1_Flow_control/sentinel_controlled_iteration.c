// Class-average program with sentinel-controlled iteration.

#include <stdio.h>

// function main begins program execution
int main(void)
{
    // initialization phase
    unsigned int counter = 0;
    int grade = 0, total = 0;
    float average;

    // processing phase

    // loop while sentinel value not yet read from user
    while (grade != -1){
        total += grade;
        counter += 1;

        // get grade from user
        printf("%s","Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    // termination phase

    // if user entered at least one grade
    if (counter != 0){
        average = (float) total / counter;

        printf("Class average is %.2f\n", average);
    }
    else {
        puts("No grades were entered");
    }
}
