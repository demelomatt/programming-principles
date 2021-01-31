# Strings

Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a special character ‘\0’.

## How to declare a string in C?

Here's how you can declare strings:

```c
char s[5];
```

![https://cdn.programiz.com/sites/tutorial2program/files/c-string-declaration_0.jpg](https://cdn.programiz.com/sites/tutorial2program/files/c-string-declaration_0.jpg)

Here, we have declared a string of 5 characters.

## How to initialize strings?

You can initialize strings in a number of ways.

```c
char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};
```

![https://cdn.programiz.com/sites/tutorial2program/files/c-string-initialization.jpg](https://cdn.programiz.com/sites/tutorial2program/files/c-string-initialization.jpg)

Let's take another example:

```c
char c[5] = "abcde";
```

Here, we are trying to assign 6 characters (the last character is `'\0'`) to a `char` array having 5 characters. This is bad and you should never do this.

## Assigning Values to Strings

Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example:

```c
char c[100];
c = "C programming";  // Error! array type is not assignable.
```

To copy the string, we need to use the strcpy() function instead. **Example: C strcpy()**

```c
#include <stdio.h>
#include <string.h>int main() {
   char str1[20] = "C programming";
   char str2[20];

   // copying str1 to str2
   strcpy(str2, str1);

   puts(str2); // C programming

   return 0;
}
```

## Read String from the user

You can use the `scanf()` function to read a string.

The `scanf()` function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

**Output:**

```
Enter name: Dennis Ritchie
Your name is Dennis.
```

Even though Dennis Ritchie was entered in the above program, only "Dennis" was stored in the name string. It's because there was a space after Dennis.

## **How to read a line of text?**

You can use the `fgets()` function to read a line of string. And, you can use `puts()` to display the string.

**Example: fgets() and puts()**

```c
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
```

Here, we have used fgets() function to read a string from the user.

The `sizeof(name)` results to 30. Hence, we can take a maximum of 30 characters as input which is the size of the name string.

To print the string, we have used `puts(name);`.

## Passing Strings to Functions

Strings can be passed to a function in a similar way as arrays. 

**Example: Passing string to a Function**

```c
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
```

C supports a large number of string handling functions in the standard library `"string.h"`.

Few commonly used string handling functions are discussed below:

[string handling](Strings%207b4590f6b53c49dba27333a5fd7c1f2c/string%20handling%207960b7a2f3b4454c82dc04ce959441b4.csv)

Strings handling functions are defined under `"string.h"` header file.

```c
#include <string.h>
```