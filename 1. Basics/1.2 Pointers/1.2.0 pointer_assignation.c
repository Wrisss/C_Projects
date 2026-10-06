#include <stdio.h>

int main(){

    int number = 99;
    int *ptr1, *ptr2; // initializate two pointers to int

    ptr1 = &number; // assign the address of variable number to ptr1
    ptr2 = ptr1; // assign the address inside ptr1 to ptr2. We have now two references to the same object.

    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    printf("%p %p %p\n", (void*)ptr1, (void*)ptr2, (void*)&number); // three reference to the same object
    printf("%p %p\n", (void*)&ptr1, (void*)&ptr2); // different address of the two pointers

    *ptr1 += 1;
    printf("%d", *ptr1);

    return 0;
}