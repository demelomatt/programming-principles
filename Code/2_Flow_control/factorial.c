// calculate the factorial of a number entered by the user
#include <stdio.h>

int fact(int n)
{
    int i,result=1;
    for (i=1;i<=n;i++){
            result *= i;
        }
    return result;
}

int main(void)
{
    int n;
    printf("Enter a positive integer number: ");
    scanf("%d",&n);

    printf("The factorial of %d is: %d",n,fact(n));

}
