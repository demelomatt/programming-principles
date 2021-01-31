# Arrays and functions

In C programming, you can pass en entire array to functions.

## **Passing individual array elements**

Passing array elements to a function is similar to passing variables to a function.

**Example:**

```c
#include <stdio.h>
void display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main()
{
    int ageArray[] = {2, 8, 4, 12};

    // Passing second and third elements to display()
    display(ageArray[1], ageArray[2]); 
    return 0;
}

```

## **Passing arrays to functions**

```c
// Program to calculate the sum of array elements by passing to a function 

#include <stdio.h>float calculateSum(float age[]);

int main() {
    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};

    // age array is passed to calculateSum()
    result = calculateSum(age); 
    printf("Result = %.2f", result);
    return 0;
}

float calculateSum(float age[]) {

  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
		sum += age[i];
  }

  return sum;
}
```

To pass an entire array to a function, only the name of the array is passed as an argument. However, notice the use of [ ] in the function definition.                                                                This informs the compiler that you are passing a one-dimensional array to the function.

## Passing Multidimensional Arrays to a Function

To pass multidimensional arrays to a function, only the name of the array is passed to the function(similar to one-dimensional arrays).

**Example:**

```c
#include <stdio.h>void displayNumbers(int num[2][2]);
int main()
{
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);

    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }
}
```

Note: In C programming, you can pass arrays to functions, however, you cannot return arrays from functions.