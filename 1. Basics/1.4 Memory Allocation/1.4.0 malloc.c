/*The Task
Write a program that:
Asks the user how many integers they want to store.
Dynamically allocates memory for that many integers.
Fills the memory with numbers (e.g., $1, 2, 3...$).
Prints the numbers and then frees the memory.
*/ 
#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    int* vector;

    printf("How much numbers I have to collect? ");
    scanf("%d", &number);

    // create an array withouth initilizatin using '[]'
    /* this case is peculiar because we can actually see that malloc created vector as contiguous block of memory
     the information of how this block is divived is given by the initilization int* vector;
     we can actually access element of vector as a proper array using both the syntaxes vector[i] or *(vector+i)  
    */
    /* malloc always allocate contiguosly block of memory, like an array, so you can navigate this block
    using the type defined to the purpose to skip chuncks of the block allocated. */
     vector = malloc(number * sizeof(int));

    // Always check for successful memory allocation
    if (vector == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

    for (size_t i = 0; i < number; i++){
        *(vector + i) = i + 1;
    }

    for (size_t i = 0; i < number; i++){
        printf("%d ", *(vector + i));
    }

    free(vector);

return 0;}