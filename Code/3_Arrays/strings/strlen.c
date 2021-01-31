// The strlen() function calculates the length of a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %d \n",strlen(a));
    printf("Length of string b = %d \n",strlen(b));

    //strlen() function doesn't count the null character \0 while calculating the length.

    return 0;
}
