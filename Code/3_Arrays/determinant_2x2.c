//calculate the determinant of a 2x2 matrix

#include <stdio.h>

#define SIZE 2

int main (void)
{

    int i, j, determinant, value, matrix[SIZE][SIZE];

    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            printf("Input the item %d,%d: ", i + 1, j + 1);
            scanf("%d", &value);
            matrix[i][j] = value;
        }
    }

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix [1][0];
    printf("The determinant of this 2x2 matrix is: %d", determinant);

    return 0;
}
