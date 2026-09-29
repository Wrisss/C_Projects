#include <stdio.h>

int main(){

    int numero = 99;
    int *puntatore, *ptr;

    puntatore = &numero;
    ptr = puntatore;

    printf("%d", *puntatore);
    printf("\n%d", *ptr);


    return 0;
}