#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "C programming";
    char str2[20] = "Old string";

    puts(str2);
    strcpy(str2,str1); // copying str1 to str2
    puts(str2);

    return 0;
}
