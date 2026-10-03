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

    printf("Il nome dell'array equivale all'indirizzo del primo elemento dell'array: %p %p", array, &array[0]);

    printf("\n\nAssegno l'indirizzo dell'array di interi alla variabile puntatore: %p %p", array, ptr);
    // ciò dimostra che il nome dell'array riporta un indirizzo di memoria.
    printf("\n\nL'indirizzo della variable 'ptr' e' diverso: %p", &ptr);

    printf("\n\nLa sintassi *(ptr + 2) da lo stesso risultato della sintassi ptr[2], array[2]: %d %d %d", *(ptr+2), ptr[2], array[2]);

    ptr++; /*ptr = ptr + 1 cambio l'indirizzo contenuto precedentemente
    con l'indirizzo dell'elemento successivo dell'array 
    */
    /* array++; errore di compilazione. 
    un array non è una variabile ma un pezzo di memoria che viene assegnato e non è più modificabile.
    */

    printf("\n\n%d", *(ptr++));
    printf("\n%d", *(ptr));

    return 0;
}