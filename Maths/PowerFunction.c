#include <stdio.h>

int pow_func(int base, int exp){

    int i;
    int p = 1;

    if (exp == 0){
        return 1;
    }

    for (i = 1; i <= exp; i++){
        p = base * p;
    }
    return p;
}

int main(){

    printf("%d", pow_func(-2,5));
    printf("\n%d", pow_func(-3,4));
    printf("\n%d", pow_func(2,7));
    printf("\n%d", pow_func(4,4));
    printf("\n%d", pow_func(4,0));
    
    return 0;
}