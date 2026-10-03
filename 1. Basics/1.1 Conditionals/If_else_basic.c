#include <stdio.h>

int main(){

    float numero = 0;

    printf("Inserisci un numero: ");
    scanf("%f", &numero);

    if (numero < 10){
        printf("Il numero %.2f e minore di 10", numero);
    }
    if (numero == 10){
        printf("Il numero %.2f e uguale a 10", numero);
    }
    else {
        printf("Il numero %.2f e maggiore di 10", numero);
    }

return 0;}