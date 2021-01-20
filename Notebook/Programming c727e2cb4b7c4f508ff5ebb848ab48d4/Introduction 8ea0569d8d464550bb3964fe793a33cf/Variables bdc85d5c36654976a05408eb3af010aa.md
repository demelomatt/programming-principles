# Variables

In programming, a variable is a container (storage area) to hold data.

To indicate the storage area, each variable should be given a unique name (identifier). Variable names are just the symbolic representation of a memory location. For example:

```c
int playerScore = 95;
```

Here, playerScore is a variable of `int` type. Here, the variable is assigned an integer value `95`.

The value of a variable can be changed, hence the name variable.

```c
char ch = 'a';
// some code
ch = 'l';
```

### Rules for naming a variable

1. A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.
2. The first letter of a variable should be either a letter or an underscore.

Note: You should always try to give meaningful names to variables. For example: firstName is a better variable name than fn.

C is a strongly typed language. This means that the variable type cannot be changed once it is declared. For example:

```c
int number = 5;      // integer variable
number = 5.5;        // error
double number;       // error
```

Here, the type of number variable is `int`. You cannot assign a floating-point (decimal) value 5.5 to this variable. Also, you cannot redefine the data type of the variable to `double`. By the way, to store the decimal values in C, you need to declare its type to either `double` or `float`.