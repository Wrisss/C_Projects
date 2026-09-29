#include <stdio.h>

int main(){

    int max;
    int min;
    // int temp;
    int number;

printf("************ INSERT 5 NUMBERS ***************\n");

for (int i = 0; i < 5; i++){
    printf("Insert number: \n");
    scanf("%d", &number);

    if (i == 0){
    max = number;
    min = number;
    }

    if (number > max ){
        max = number;
    } else if (number < min){
        min = number;
    }
}

printf("Max number inserted is: %d\n", max);
printf("Min number inserted is: %d", min);

return 0;}