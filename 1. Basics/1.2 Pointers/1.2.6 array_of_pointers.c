#include <stdio.h>

/* GENERAL RULE
    the syntax array[i] is equivalent to *(array + i)
    you can substitute the first with the second to obtain the same output*/

int main(){

    int* array1[4];

    int number1 = 10;
    int number2 = 11;

    // array1[0] = &number1;
    *(array1) = &number1;
    // array1[1] = &number2;
    *(array1 + 1) = &number2;

        printf("%d\n", **array1);
        printf("%d\n", *(*array1));
        printf("%zu\n", sizeof(array1)); // pointers always store addresses which are 8 bytes long. 8*4 = 32
        printf("%d\n", *(array1[0]));
/*(1)*/ printf("%d\n", *(array1[1]));
        printf("%d", *(*(array1 + 1))); // different syntax same output of (1)

return 0;}