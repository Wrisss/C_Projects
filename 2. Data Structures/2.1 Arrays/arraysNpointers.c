/*
Part 1: Array Decay
Write a program that:
Declares an integer array int arr[5] = {10, 20, 30, 40, 50};
Prints the address of the array using arr and &arr[0]
Compares them to see if they're identical
Questions to answer in comments:
Are arr and &arr[0] the same?
What does arr represent when used in expressions?
Part 2: Pointer Arithmetic
Create a pointer int *ptr = arr;
Use pointer arithmetic to access elements:

Print *(ptr + 2)
Print ptr[2]
Print arr[2]

Increment the pointer: ptr++;
Try to increment the array: arr++; (what happens?)*/

#include <stdio.h>

int main(){

    int array[5] = {10, 20, 30, 40, 50};
    int* ptr = array; // equivalente a int* ptr = &array[0]

    printf("Array name and address to first element of the array hold the same address: %p %p\n\n", array, &array[0]);

    printf("Address of pointer is different from the address of the array: %p\n\n", &ptr);

    printf("Syntax '(ptr + 2)' and 'ptr[2], array[2]' gave the same output : %d %d %d", *(ptr+2), ptr[2], array[2]);

    ptr++; /* ptr = ptr + 1. ptr now points to the next element of the array after incrementation. 
    ptr now holds the address of array[1].*/
    /* array++: Compiling Error. An array is block of memory assigned by the OS. You can't increment it like a pointer.
    this behaviour is called 'Array Decaying'.
    */
    printf("\n\n%d", *(ptr++));
    printf("\n%d", *(ptr));

    return 0;
}