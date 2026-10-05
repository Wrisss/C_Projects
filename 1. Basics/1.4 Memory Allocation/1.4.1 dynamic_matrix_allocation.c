#include <stdio.h>
#include <stdlib.h>


int main(){

    int** Values = NULL;
    int i,j;
    int n;
    
    printf("Insert the dimension of the matrix: ");
    scanf("%d", &n);

    /* allocate an array that contains 3 pointers to int (n * 8 bytes). Those are stored contiguosly in memory due the
    malloc behaviour. Values stores the address of this array.*/
    Values = (int**)malloc(n*sizeof(int*));

    /*  allocate n arrays (n * 4 bytes) of memory. Those arrays can store only n ints. These ints are contigous in
    memory. Assign the addresses of these arrays inside the every spot of the array previously allocated stored
    inside Values. Every allocation could allocate those array not contigously in the memory because the
    cycle create once per time. */
    for (i = 0; i < n; i++){
        Values[i] = (int*)malloc(n*sizeof(int));
    }

    // initialize the matrix with some values
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            Values[i][j] = i+j;
        }
    }

    // print the results
    for (i = 0; i < n; i++){
        printf("\n");
        for ( j = 0; j <n; j++){
            printf("%d ", Values[i][j]);
        }
    }

    putchar('\n');


    // deallocate the memory
    // deallocate first the arrays that contains the addresses of the array of ints
    for(i=0; i<n; i++)
    free(Values[i]);

    // deallocate the matrix
    free(Values);

return 0;}