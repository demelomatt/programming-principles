# Scope of variable

## Local Variable

The local variables exist only inside the block in which it is declared.

Example:

```c
#include <stdio.h>int main(void) {
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}
```

When you run the above program, you will get an error undeclared identifier i. It's because i is declared inside the `for` loop block. Outside of the block, it's undeclared.

Another example:

```c
int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}

```

Each function when it receives local variables as input, receives copies of those variables, not the variables themselves.

Example:

```c
int main(void)
{
	int foo = 4;
	triple(foo);
}

int triple(int x)
{
	return x *= 3; //it does not changes the value of foo
}

```

## Global Variable

Variables that are declared outside of all functions are known as external or global variables. They are accessible from any function inside the program.

You have got to be careful when you are working with global variables. While they are very flexible in being able to pass information aroung, it also can have some dangerous consequences if one function changes the value of a variable before you expect it to be changed.

Example:

```c
#include <stdio.h>
void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}

```