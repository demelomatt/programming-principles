/* The strcmp() function takes two strings and returns an integer.
The strcmp() compares two strings character by character.
*/

#include <stdio.h>
#include <string.h>

int main (void)
{
    char str1[] = "abcd", str2[] = "abcD", str3[] = "abcd";
    int result;

    result = strcmp(str1,str2);
    printf("strcmp(str1,str2) = %d\n",result); //positive integer if the ASCII value of the first unmatched character is greater than the second.

    result = strcmp(str2,str1);
    printf("strcmp(str1,str2) = %d\n",result); //negative if the ASCII value of the first unmatched character is less than the second.

    result = strcmp(str1, str3);
    printf("strcmp(str1,str3) = %d\n",result); // 0 if both strings are identical (equal)

    return 0;
}
