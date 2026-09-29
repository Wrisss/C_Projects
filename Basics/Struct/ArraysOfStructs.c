#include <stdio.h>

struct Studente{

    char nome[50];
    int  eta;
    float media;               
};

int main(){

    struct Studente array_studenti[5];

    for (int i = 0; i < 5; i++){
        printf("Inserisci i dati dello studente: \n");
        scanf("%49s", array_studenti[i].nome);
        scanf("%d", &array_studenti[i].eta);
        scanf("%f", &array_studenti[i].media);
    }

    printf("\n");
    printf("Elenco studenti: \n");

    for (int i = 0; i < 5; i++){
        printf("Nome: %s\n", array_studenti[i].nome);
        printf("Eta: %d\n", array_studenti[i].eta);
        printf("Media: %.2f \n\n", array_studenti[i].media);
    }

return 0;}