// The strcat() function concatenates the destination string and the source string, and the result is stored in the destination string.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "My name is ";
    char str2[] = "Matheus";

    strcat(str1,str2);
    puts(str1);
}
