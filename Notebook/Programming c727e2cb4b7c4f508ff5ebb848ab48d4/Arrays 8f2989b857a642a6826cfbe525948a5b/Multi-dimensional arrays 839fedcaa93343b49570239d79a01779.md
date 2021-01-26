# Multi-dimensional arrays

An array of arrays are known as multidimensional arrays.

For example:

```c
float x[3][4];
```

Here, x is a two-dimensional (2d) array. The array can hold 12 elements. You can think the array as a table with 3 rows and each row has 4 columns.

In fact, in memory, it really does just remain a 12 element, single dimensional array. But in terms of organization and visualization and human perception, it can be a lot easier to work with a grid.

![https://cdn.programiz.com/sites/tutorial2program/files/two-dimensional-array_0.jpg](https://cdn.programiz.com/sites/tutorial2program/files/two-dimensional-array_0.jpg)

Similarly, you can declare a three-dimensional (3d) array. For example:

```c
float y[2][4][3];
```

Here, the array y can hold 24 elements.

## Initializing a multidimensional array

Here is how you can initialize two-dimensional and three-dimensional arrays:

### Initialization of a 2d array

```c
// Different ways to initialize two-dimensional array

int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
                         
int c[2][3] = {1, 3, 0, -1, 5, 9};
```

---

### Initialization of a 3d array

You can initialize a three-dimensional array in a similar way like a two-dimensional array. 

Here's an example:

```c
int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
```

### Example:

```c
// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix:");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%.1f\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
```