#include <stdio.h>

int main(){

    float celsius, fahr; // floating point
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius\t\tFahrenheit\n");
    while (celsius <= upper){

        fahr = 32.0 + ((9.0*celsius)/5.0);
        // printf("%d\t%d\n", fahr, celsius);
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;

    }

    return 0;
}