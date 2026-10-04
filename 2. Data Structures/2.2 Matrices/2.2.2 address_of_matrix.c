#include <stdio.h>

int main(){

    int matrix[3][3];

    printf("ALL ADDRESSES\n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%p\n", (void*)&matrix[i][j]);
        }
    }

    printf("\n");

/*   printf("%p\n", (void*)&matrix[0][0]);
    printf("%p\n", (void*)&matrix[1][0]);
    printf("%p\n", (void*)&matrix[2][0]);
    printf("\n");
    */
        
    printf("PTR1 POINTER TO FIRST ROW TO THIRD\n");
    // what type is int(*)[i]? is a pointer to an array of 3 elements.
    int (*ptr1)[3] = matrix;
    for (int i = 0; i < 3; i++){
        printf("%p\n", ptr1[i]);
    }


    printf("\nPTR1 POINTER TO SECOND ROW TO THIRD\n");
   
    ptr1 = matrix + 1;
    for (int i = 0; i < 2; i++){
        printf("%p\n", ptr1[i]);
    }

    printf("\nSECOND ELEMENT OF THE SECOND ROW\n");
    printf("%p\n", (ptr1[0]+1));


    printf("\nPTR1 POINTER TO THIRD ROW\n");
    ptr1 = matrix + 2;
    for (int i = 0; i < 1; i++){
        printf("%p\n", ptr1[i]);
    }

    printf("\n");

    printf("ACCESS THE MATRIX ONE INT PER TIME\n");
    int* ptr2 = *matrix;
    printf("%p\n", (void*)ptr2);
    ptr2++;
    printf("%p\n", (void*)ptr2);
    ptr2++;
    printf("%p\n", (void*)ptr2);
    ptr2++;
    printf("%p\n", (void*)ptr2);

}
