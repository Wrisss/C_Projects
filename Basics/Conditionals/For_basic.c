#include <stdio.h>

// Basic Counter

int main(){

    int number;
    printf("Insert a number for counting: ");
    scanf("%d", &number);

    if (number < 0) return -1;

    for (int i = 0; i <= number; i++){
        printf("%d\n", i);
    }

return 0;}