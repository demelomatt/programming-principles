// Static arrays are initialized to zero if not explicitly initialized.

#include <stdio.h>

void staticArray(void); // function prototype
void automaticArray(void); // function prototype

// function main begins program execution
int main(void)
{
    puts("First call to each function");
    staticArray();
    automaticArray();

    puts("\n\nSecond call to each function");
    staticArray();  //The second time the function is called, the static array contains the values stored during the first function call.
    automaticArray(); //The second time the function is called, the array elements are initialized to 1, 2 and 3 again because the array has automatic storage duration.

}

// function to demonstrate a static local array
void staticArray(void)
{
    static int array1[3];

    puts("\nValues on entering staticArray:");

    // output contents of array1
    for (int i = 0; i <=2; i++){
        printf("array1[%i] = %d ", i, array1[i]);
    }

    puts("\nValues on existing staticArray:");

    // modify and output contents of array1
    for (int i = 0; i <=2; i++){
        printf("array1[%i] = %d ", i, array1[i] += 5);
    }
}

// function to demonstrate an automatic local array
void automaticArray(void)
{
    int array2[3] = {1,2,3};

    puts("\n\nValues on entering automaticArray:");

    // output contents of array2
    for (int i = 0; i <=2; i++){
        printf("array2[%i] = %d ", i, array2[i]);
    }

    puts("\nValues on existing automaticArray:");

    // modify and output contents of array2
    for (int i = 0; i <=2; i++){
        printf("array2[%i] = %d ", i, array2[i] += 5);
    }
}
