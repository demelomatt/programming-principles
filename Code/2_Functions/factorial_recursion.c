// Factorial of a Number Using Recursion
#include <stdio.h>

int fact(int n)
{
    if (n>=1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }
}

int main (void)
{
    int n;
    printf("Enter a positive integer number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,fact(n));
}
