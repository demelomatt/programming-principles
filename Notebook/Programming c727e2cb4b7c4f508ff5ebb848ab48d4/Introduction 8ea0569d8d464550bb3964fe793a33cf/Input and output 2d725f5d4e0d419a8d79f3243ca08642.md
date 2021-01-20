# Input and output

- **input** : what is put in, taken in, or operated on by any process or system
- **output**: what is produced, delivered, or supplied (data) by a process or system

## C Output

In C programming, printf() is one of the main output function. The function sends formatted output to the screen. Example:

```c
#include <stdio.h>    int main()
{ 
    // Displays the string inside quotations
    printf("C Programming");
    return 0;
}
```

How does this program work?

- All valid C programs must contain the `main()` function. The code execution begins from the start of the `main()` function.
- The `printf()` is a library function to send formatted output to the screen. The function prints the string inside quotations.
- To use `printf()` in our program, we need to include `stdio.h` header file using the `#include <stdio.h>` statement.
- The `return 0;` statement inside the `main()` function is the "Exit status" of the program. It's optional.

## C Input

In C programming, scanf() is one of the commonly used function to take input from the user. The scanf() function reads formatted input from the standard input such as keyboards.

### Example : Integer Input/Output

```c
#include <stdio.h>int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    return 0;
}
```

Here, we have used `%d` format specifier inside the `scanf()` function to take `int` input from the user. When the user enters an integer, it is stored in the testInteger variable.

Notice, that we have used `&testInteger` inside `scanf()`. It is because &testInteger gets the address of testInteger, and the value entered by the user is stored in that address.

## I/O Multiple Values

Here's how you can take multiple inputs from the user and display them.

```c
#include <stdio.h>int main()
{
    int a;
    float b;

    printf("Enter integer and then a float: ");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);  
    return 0;
}
```

[https://www.programiz.com/c-programming/c-input-output](https://www.programiz.com/c-programming/c-input-output)