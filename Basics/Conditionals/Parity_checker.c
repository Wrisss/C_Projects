#include <stdio.h>

// check if a number is even or odd.

int main(){

    int number = 0;

    printf("Insert a number to see its parity: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }

return 0;}