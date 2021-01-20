# break and continue

## break

The break statement ends the loop immediately when it is encountered. Its syntax is:

```c
break;
```

Example:

```c
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>
int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}
```

## continue

The `continue` statement skips the current iteration of the loop and continues with the next iteration. Its syntax is:

```c
continue;
```

Example:

```c
// Program to calculate the sum of numbers (10 numbers max)

#include <stdio.h>int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);
			
			// if the user enters a negative number, it's not added to the result
      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}
```