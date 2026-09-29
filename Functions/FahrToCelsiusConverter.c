#include <stdio.h>

float FahrCelsConverter(int fahr){

    float celsius;
    return celsius = (5.0/9.0) * (fahr-32);
}

int main(){

    int fahr;
    while (fahr <= 300){
    printf("Conversione da Fahr a Celsius: %dF --> %.1fC\n", fahr, FahrCelsConverter(fahr));
    fahr = fahr+20;
}
    return 0;
}