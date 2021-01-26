# One-dimensional array

![One-dimensional%20array%209aceb68db1254f3582bc9c000e9275ca/Untitled.png](One-dimensional%20array%209aceb68db1254f3582bc9c000e9275ca/Untitled.png)

## How to declare an array in C?

```c
dataType arrayName[arraySize];
```

### **For example:**

```c
float mark[5];
```

Here, we declared an array, mark, of floating-point type. And its size is 5. Meaning, it can hold 5 floating-point values.

## Access Array Elements

You can access elements of an array by indices.

Suppose you declared an array mark as above. The first element is mark[0], the second element is mark[1] and so on.

## How to initialize an array?

It is possible to initialize an array during declaration. For example,

```c
int mark[5] = {19, 10, 8, 17, 9};
```

You can also initialize an array like this:

```c
int mark[] = {19, 10, 8, 17, 9};
```

Here, we haven't specified the size. However, the compiler knows its size is 5 as we are initializing it with 5 elements.

![https://cdn.programiz.com/sites/tutorial2program/files/c-array-initialization.jpg](https://cdn.programiz.com/sites/tutorial2program/files/c-array-initialization.jpg)

## Change Value of Array elements

```c
int mark[5] = {19, 10, 8, 17, 9}

// make the value of the third element to -1
mark[2] = -1;

// make the value of the fifth element to 0
mark[4] = 0;

```

### Example: Array Input/Output

```c
// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>int main() {
  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
```

## Access elements out of its bound!

Suppose you declared an array of 10 elements. Let's say:

```c
int testArray[10];
```

You can access the array elements from `testArray[0]` to `testArray[9]`.

Now let's say if you try to access `testArray[12]`. The element is not available. This may cause unexpected output (undefined behavior). Sometimes you might get an error and some other time your program may run correctly. Hence, you should never access elements of an array outside of its bound.