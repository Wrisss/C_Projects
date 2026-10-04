#include <stdio.h>

int main(){

    int matrix[2][4] = {{0,1,2,3}, {6,7,8,9}};

        printf("%zu\n", sizeof(matrix)); // size of the entire structure
        printf("%zu\n\n", sizeof(*matrix)); // size of the first row

/*(1)*/ printf("%p\n", (void*) matrix); // address of the first row
        printf("%p\n", (void*) &matrix[0]); // same output different syntax of (1)
        printf("%p\n", (void*) &matrix[0][0]); // same output different syntax of (1)
        printf("%p\n", (void*) *(matrix));  // same output different syntax of (1)
        printf("%p\n", (void*) *matrix); // same output different syntax of (1)
        printf("%d\n", *matrix); // *matrix is a (int)[4] type, deferencing one time just give the integer as an address
        printf("%d\n\n", *(*matrix)); // deferencing two times give the value of the first element of the first row

        // 0
/*(2)*/ printf("%d\n", matrix[0][0]);
        printf("%d\n", *(*matrix)); // same output different syntax of (2)
        printf("%d\n", **matrix);   // same output different syntax of (2)
        printf("%d\n\n", *(matrix[0])); // same output different syntax of (2)

        //6
/*(3)*/ printf("%d\n", matrix[1][0]);
        printf("%p\n", (void*) &matrix[1][0]); // address of the second row
        printf("%d\n", *(matrix[1])); // same output different syntax of (3)
        printf("%d\n", *(*(matrix + 1))); // same output different syntax of (3)
        printf("%p\n\n", (void*) *(matrix + 1)); // address of the second row

        //1
/*(4)*/ printf("%d\n", matrix[0][1]);
        printf("%p\n", (void*) &matrix[0][1]); // address of the first element of the first row
        printf("%d\n", (*matrix)[1]);  // same output different syntax of (4)
        printf("%d\n", *(matrix[0]) + 1); // same output different syntax of (4)
        printf("%d\n\n", *(*(matrix) + 1)); // same output different syntax of (4)

        //9
/*(5)*/ printf("%d\n", matrix[1][3]);
        printf("%d\n", *(matrix[1]) + 3 );
        printf("%d\n", *(*(matrix + 1) + 3)); //same output different sytanx of (5)

        //printf("%p\n", *(matrix + 1));
        

return 0;}