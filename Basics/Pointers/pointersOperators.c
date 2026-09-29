#include <stdio.h>

int main(){

    int x = 20;

/*1*/   printf("L'indirizzo di 'x' e: %p", &x);
/*2*/   printf("\nIl valore di x e: %i", *(&x));
/*3*/   printf("\nIl valore di x e: %i", x);

    return 0;
}