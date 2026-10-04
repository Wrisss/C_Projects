#include <stdio.h>

int main(){

    int matrix[2][2] = {{10,20}, {30,40}};

    for (int i = 0; i < 2; i++){
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", matrix[i][j]);
        }
    }

    printf("\n");

    /* int (*p)[2] = matrix;
    (*p)[0] = 100;
    (*p)[1] = 200;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", matrix[i][j]);
        }
    }*/

    int (*p)[2] = matrix+1;
    (*p)[0] = 100;
    (*p)[1] = 200;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", matrix[i][j]);
        }
    }
}