#include <stdio.h>
#include <stdlib.h>

/*The Task
Write a program that:
Allocates a "master" array of 2 pointers (two rows).
Allocates 3 integers for the first row.
Allocates 5 integers for the second row.
Fills them with values, prints them, and (crucially) frees all the memory in the correct order.*/

int main(){

    int rows = 2;
    int **master; // = master[0][0]

    master = (int**)malloc(rows * sizeof(int*));
    if(master == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

        master[0] = (int*)malloc(3*sizeof(int)); 
        master[1] = (int*)malloc(5*sizeof(int));

        for (int i = 0; i < 3; i++){ master[0][i] = 5+i; }
        for (int i = 0; i < 5; i++ ){ master[1][i] = 20+i; }

        for (int i = 0; i < 3; i++){
        printf("%d ", master[0][i]);
    }

        printf("\n");

        for (int i = 0; i < 5; i++){
            printf("%d ", master[1][i]);
        }

        free (master[0]);
        free (master[1]);
        free(master);
    

    return 0;
}