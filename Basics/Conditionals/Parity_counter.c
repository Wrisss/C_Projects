#include <stdio.h>

// Parity Counter

int main(){

    int number;
    int counter = 0;

    printf("Insert a number to count the amount of even numbers until reach it: ");
    scanf("%d", &number);

    for (int i = 2; i <= number; i+=2){
        counter++;
    }

    printf("There are %d even numbers", counter);

return 0;}