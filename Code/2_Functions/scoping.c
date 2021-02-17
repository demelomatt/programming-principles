// Scoping.

#include <stdio.h>

// function prototypes
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

// global variables
int x = 1;

int main(void)
{
    int x = 5; // local variable to main

    printf("local x in outer scope of main is %d\n", x);

    { // start new scope
        int x = 7; // local variable to new scope

        printf("local x in inner scope of main is %d\n", x);
    } // end new scope

    puts("\nFirst fuctions call");
    useLocal(); // useLocal has automatic local x
    useStaticLocal(); // useStaticLocal has static local x
    useGlobal(); // useGlobal uses global x

    puts("\nSecond fuctions call");
    useLocal(); // useLocal reinitializes automatic local x
    useStaticLocal(); // static local x retains its prior value
    useGlobal(); // global x also retains its value
}

// useLocal reinitializes local variable x during each call
void useLocal(void)
{
    int x = 25;

    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    x++;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

// useStaticLocal initializes static local variable x only the first time the function is called
void useStaticLocal(void)
{
    static int x = 25;

    printf("\nlocal static x in useLocal is %d after entering useStaticLocal\n", x);
    x++;
    printf("local static x in useLocal is %d before exiting useStaticLocal\n", x);
}

// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}
