# Iteration

In programming, iteration is a sequence of instructions that is continually repeated until the specified condition is met.

- Count-controlled loops

    Most programming languages have constructions for repeating a loop a certain number of times. In most cases counting can go downwards instead of upwards and step sizes other than 1 can be used.

    # for Loop

    ![Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled.png](Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled.png)

    ### The syntax of the `for` loop in C is:

    ```c
    for (initializationStatement; testExpression; updateStatement)
    {
        // statements inside the body of loop
    }
    ```

    ---

    ### How for loop works?

    - The initialization statement is executed only once.
    - Then, the test expression is evaluated. If the test expression is evaluated to false, the `for` loop is terminated.
    - However, if the test expression is evaluated to true, statements inside the body of `for` loop are executed, and the update expression is updated.
    - Again the test expression is evaluated.

    This process goes on until the test expression is false. When the test expression is false, the loop terminates.

    ### Example:

    ```c
    // Program to calculate the sum of first n natural numbers
    // Positive integers 1,2,3...n are known as natural numbers

    #include <stdio.h>
    int main()
    {
        int num, count, sum = 0;

        printf("Enter a positive integer: ");
        scanf("%d", &num);

        // for loop terminates when num is less than count
        for(count = 1; count <= num; ++count)
        {
            sum += count;
        }

        printf("Sum = %d", sum);

        return 0;
    }
    ```

    ### Example 2:

    ```c
    //Factorial of a Number
    #include <stdio.h>int main() {
        int n, i;
        unsigned long long fact = 1;
        printf("Enter an integer: ");
        scanf("%d", &n);

        // shows error if the user enters a negative integer
        if (n < 0)
            printf("Error! Factorial of a negative number doesn't exist.");
        else {
            for (i = 1; i <= n; ++i) {
                fact *= i;
            }
            printf("Factorial of %d = %llu", n, fact);
        }

        return 0;
    }
    ```

- Condition-controlled loops

    Most programming languages have constructions for repeating a loop until some condition changes. Some variations test the condition at the start of the loop; others test it at the end. If the test is at the start, the body may be skipped completely; if it is at the end, the body is always executed at least once.

    # while loop

    ![Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%201.png](Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%201.png)

    ### The syntax of the `while` loop in C is:

    ```c
    while (testExpression) 
    {
        // statements inside the body of the loop 
    }
    ```

    ---

    ### How while loop works?

    - The `while` loop evaluates the test expression inside the parenthesis `()`.
    - If the test expression is true, statements inside the body of `while` loop are executed. Then, the test expression is evaluated again.
    - The process goes on until the test expression is evaluated to false.
    - If the test expression is false, the loop terminates (ends).

    ### Example:

    ```c
    // Print numbers from 1 to 5

    #include <stdio.h>
    int main()
    {
        int i = 1;
        
        while (i <= 5)
        {
            printf("%d\n", i);
            ++i;
        }

        return 0;
    }
    ```

    # do...while loop

    ![Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%202.png](Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%202.png)

    The `do..while` loop is similar to the `while` loop with one important difference. The body of `do...while` loop is executed at least once. Only then, the test expression is evaluated.

    ### The syntax of the `do...while` loop is:

    ```c
    do
    {
       // statements inside the body of the loop
    }
    while (testExpression);
    ```

    ---

    ### How do...while loop works?

    - The body of do...while loop is executed once. Only then, the test expression is evaluated.
    - If the test expression is true, the body of the loop is executed again and the test expression is evaluated.
    - This process goes on until the test expression becomes false.
    - If the test expression is false, the loop ends.

    ### Example:

    ```c
    // Program to add numbers until the user enters zero

    #include <stdio.h>
    int main()
    {
        double number, sum = 0;

        // the body of the loop is executed at least once
        do
        {
            printf("Enter a number: ");
            scanf("%lf", &number);
            sum += number;
        }
        while(number != 0.0);

        printf("Sum = %.2lf",sum);

        return 0;
    }
    ```

- Collection-controlled loops

    Several programming languages (it is not the case with c) have special constructs which allow implicit looping through all elements of an array, or all members of a set or collection.

    # Foreach

    ![Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%203.png](Iteration%2037d6908e7da64fd283dc1d9f2dbf99fc/Untitled%203.png)

    ### Example:

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
       int myArr[] = { 99, 15, 67 };

       // foreach loop
       for (int elelement : myArr)
       cout << element << endl;
    }
    ```