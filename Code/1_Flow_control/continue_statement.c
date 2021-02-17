// Using the break statement in a for statement.

/*The continue statement, when executed in a while, for or do…while statement, skips the
remaining statements in that control statement’s body and performs the next iteration of the
loop.  */

#include <stdio.h>

int main(void)
{
    int x;

    for (x = 1; x <= 10; x++) {

        if (x == 5) {
            puts("\nSkipped the value 5");
            continue;
        }

        printf("%d ", x);
    }
}
