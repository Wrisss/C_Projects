#include <stdio.h>
#include <stdlib.h>

/*The Task
Write a program that:
Asks the user how many integers they want to store.
Dynamically allocates memory for that many integers.
Fills the memory with numbers (e.g., $1, 2, 3...$).
Prints the numbers and then frees the memory.
*/ 

int main(){

    int numero;
    int *vector; // = vector[0]

    printf("Quanti interi devo conservare? ");
    scanf("%d", &numero);

    // malloc is a function that return always a void pointer
    vector = (int*)malloc(numero * sizeof(int));

    // Always check for successful memory allocation
    if (vector == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

    for (int i = 0; i < numero; i++){
        vector[i] = i + 1;
    }

    for (int i = 0; i < numero; i++){
        printf("%d ", vector[i]);
    }

    free(vector);


    return 0;
}