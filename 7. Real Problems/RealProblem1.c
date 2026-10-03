/*Un negozio vuole analizzare le vendite effettuate durante una settimana.
Crea un programma che utilizzi un array di 7 elementi, in cui ogni elemento rappresenta il numero di prodotti venduti in un giorno:
Lunedì
Martedì
Mercoledì
Giovedì
Venerdì
Sabato
Domenica
Il programma deve:
Permettere di inserire il numero di prodotti venduti ogni giorno.
Calcolare il totale dei prodotti venduti durante la settimana.
Calcolare la media giornaliera delle vendite.
Individuare il giorno con il maggior numero di vendite.
Contare quanti giorni hanno avuto più di 50 vendite.
Vincolo: utilizza un array e dei cicli (for, while, ecc.) per elaborare i dati.
*/
#include <stdio.h>
#define THRESHOLD 50


int main(){

    float avg_sold = 0;
    int max_day_index;
    int max_day_sold = 0;
    int counter = 0;
    int item_sold = 0;
    int week_sum = 0;
    
    char weekdays[7][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int array_sold[7] = {0};

/*    for (int i = 0; i < 7; i++){
        printf("%s ", weekdays[i]);
    }*/

    printf("Enter the number of products sold for each day of the week\n");
    
    for(int i = 0; i < 7; i++){
        printf("%s ", weekdays[i]); scanf("%d", &item_sold);
        while(item_sold < 0){
            printf("ERROR. you can't insert positive numbers.");
               scanf("%d", &item_sold); }
        array_sold[i] = item_sold;
    }
    // count every items sold over the week
    for (int i = 0; i < 7; i++){
        week_sum += array_sold[i];
    }
    // compute the average of sold items over the entire week
    avg_sold = (week_sum/7);
    // count the total numbers of weekdays who sold more than 50 items
    for (int i = 0; i < 7; i++){
        if (array_sold[i] > THRESHOLD){
            counter++;
        }
    }

    // select the day that sold most items over the week
    for(int i = 0; i < 7; i++){
        if (array_sold[i] > max_day_sold){
            max_day_sold = array_sold[i];
            max_day_index = i;
        }
    }

    printf("Sum of the product sold over the week: %d\n", week_sum);
    printf("Average of the product sold over the week: %f\n", avg_sold);
    printf("Counter of days with more than 50 items sold: %d\n", counter);
    printf("Day with most sales: %s\n", weekdays[max_day_index]);
    
    
return 0;}