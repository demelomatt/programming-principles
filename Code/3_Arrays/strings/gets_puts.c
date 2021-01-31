// C prgram to show the use of puts
#include<stdio.h>

int main()
{
    char name[50];
    printf("Enter name: ");
    gets(name);     //Function to read string from user.
    printf("Name: ");
    puts(name);    //Function to display string.

    return 0;
}
    /*scanf() reads input until it encounters whitespace, newline or End Of File(EOF)
    whereas gets() reads input until it encounters newline or End Of File(EOF),
    gets() does not stop reading input when it encounters whitespace instead it takes whitespace as a string.
    scanf can read multiple values of different data types whereas gets() will only get character string data.*/

	/*the printf() function is used to print both strings and variables to the screen
	while the puts() function only permits you to print a string only to your screen.*/
