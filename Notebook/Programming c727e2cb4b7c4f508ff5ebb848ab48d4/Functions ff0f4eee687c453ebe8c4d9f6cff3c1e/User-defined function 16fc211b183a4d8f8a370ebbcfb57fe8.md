# User-defined function

You can also create functions as per your need. Such functions created by the user are known as user-defined functions.

### How user-defined function works?

```c
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}

```

The execution of a C program begins from the `main()` function.

When the compiler encounters `functionName();`, control of the program jumps to

```c
 void functionName()
```

And, the compiler starts executing the codes inside `functionName()`.

Note, function names are identifiers and should be unique.

Example:

Here is an example to add two integers. To perform this task, we have created an user-defined `addNumbers()`.

```c
#include <stdio.h>int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}
```

The parameters a and b accepts the passed arguments in the function definition. These arguments are called formal parameters of the function.

The type of arguments passed to a function and the formal parameters must match, otherwise, the compiler will throw an error.

A function can also be called without passing an argument.

## Function prototype

A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body.

A function prototype gives information to the compiler that the function may later be used in the program.

### Syntax of function prototype

```c
returnType functionName(type1 argument1, type2 argument2, ...);
```

The function prototype is not needed if the user-defined function is defined before the main() function.