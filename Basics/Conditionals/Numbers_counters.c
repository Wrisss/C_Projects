#include <stdio.h>

int main(){

    int number;
    int neg_counter = 0;
    int pos_counter = 0;    
    int zeros = 0;

    printf("************* INSERT 5 NUMBERS ************\n");
    for (int i = 0; i < 5; i++){
        printf("Insert Number: \n");
        scanf("%d", &number);

        if (number < 0){
            neg_counter++;
        }
        else if (number == 0){
            zeros++;
        }
        else if (number > 0){
            pos_counter++;
        }
    }

    printf("Positive numbers inserted: %d\n", pos_counter);
    printf("Zeros inserted: %d\n", zeros);
    printf("Negative numbers inserted: %d", neg_counter);


return 0;}