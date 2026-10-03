#include <stdio.h>

int main(){

    printf("%d", (getchar() != EOF));

    /* With any character given as input the result is 1. 
    In C every boolean returned as non-zero is always true. 
    With Ctrl+z, the equivalent of EOF, the result is 0, which is false.*/

    return 0;
}