#include <stdio.h>

/*  '*' operator: is used to both declare a variable pointer and to access (indirection) 
    the value inside a pointer variable
    '&' operator: is used to retrieve the address of a variable
    '*' and '&' are complementary operators. They negate themselves
*/


int main(){

    int x = 10;
    int* ptr = &x;

    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", (void*)ptr);
    printf("%d", *(&x)); // complemnetary operators

    /*  (&variable+variable type) can be seen as a type, in this case int* type.
        It describes the type of pointer variable you can access this address.
    */


return 0;}