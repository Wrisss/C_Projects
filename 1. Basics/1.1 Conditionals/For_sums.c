#include <stdio.h>

int main(){

    int number;
    int sum = 0;

    printf("Insert one number and make the sum of all integers before it: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){
        sum = sum + i;
    }

    printf("Sum is: %d", sum);

return 0;}