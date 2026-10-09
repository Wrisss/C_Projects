#include <stdio.h>

void xor_swap(int*, int*);

int main(){

    int a=5;
    int b=7;

    xor_swap(&a, &b);

    printf("%d %d", a, b);

return 0;}

void xor_swap(int* a, int* b){

    if(a == b) // if a and point to the same object in memory
        return;

    *a = *a^*b;
    *b = *a^*b;
    *a = *a ^*b;
}
