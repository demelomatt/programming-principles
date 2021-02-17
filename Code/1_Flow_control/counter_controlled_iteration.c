// Class average program with counter-controlled iteration.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int counter; // number of grade to be entered next
    int grade; // grade value
    int total; // sum of grades entered by user
    int average; // average of grades

    // initialization phase
    total = 0;
    counter = 1;

    // processing phase
    while (counter <=10) { // loop 10 times
        printf( "%s", "Enter grade: " );
        scanf( "%d", &grade );
        total = total + grade;
        counter = counter + 1;
    }

    // termination phase
    average = total / 10; // integer division

    printf( "Class average is %d\n", average );
}
