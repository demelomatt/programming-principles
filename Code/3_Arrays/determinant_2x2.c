//calculate the determinant of a 2x2 matrix

#include <stdio.h>

#define size 2

int main (void){

    int i,j,determinant,value,matrix[size][size];

    for (i=0;i<size;i++){
        for (j=0;j<size;j++){
            printf("Input the item %d,%d: ",i+1,j+1);
            scanf("%d",&value);
            matrix[i][j]=value;
        }
    }

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix [1][0];
    printf("THe determinant of this 2x2 matrix is: %d",determinant);

    return 0;
}
