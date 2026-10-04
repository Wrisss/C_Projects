#include <stdio.h>

struct Studente{
        char nome[50];
        int eta;
        float media;
    };

int main(){

    struct Studente studente1;
    struct Studente studente2;

    printf("Inserisci nome studente 1: \n");
    scanf("%49s", studente1.nome);
    printf("Inserisci eta studente 1: \n");
    scanf("%d", &studente1.eta);
    printf("Inserisci media studente 1: \n");
    scanf("%f", &studente1.media);
    printf("\n");

    printf("Inserisci nome studente 2: \n");
    scanf("%49s", studente2.nome);
    printf("Inserisci eta studente 2: \n");
    scanf("%d", &studente2.eta);
    printf("Inserisci media studente 2: \n");
    scanf("%f", &studente2.media);
    
    printf("Nome: %s \n", studente1.nome);
    printf("Eta: %d \n", studente1.eta);
    printf("media: %.2f \n", studente1.media);

    printf("\n");

    printf("Nome: %s \n", studente2.nome);
    printf("Eta: %d \n", studente2.eta);
    printf("media: %.2f \n", studente2.media);

    if (studente1.media > studente2.media){
    printf("Lo studente con la media maggiore e: %s", studente1.nome);
    }
    else{
        printf("Lo studente con la media maggiore e %s", studente2.nome);
    }
    
return 0;}