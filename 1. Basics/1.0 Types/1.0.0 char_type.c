#include <stdio.h>

int main(){

    unsigned char c = 'M';

    printf("%c\n", c);
    printf("Representation of M as number using UNICODE convention: %d\n", c);
    printf("How much byte is char type: %d\n", sizeof(c));

    printf("Representation in bit of the variable M: ");
    /* '>>' is an operator that consider the bits used to codify the variable not the variable itself.
    It shifts to the right the i-bits of the variable. 
    In the first cycle iteration shift to the right 7 bits. 
    Then the '&' is the bitwise AND operator, compare the same positions of every bit for both the variables
    in this case the result of the shifting with 1 which is represented in bit as 00000001.
    it returns 1 only for the bits that share the same positions of the variable in the representation.
    Elsewhere return always 0.
    To summarize: the least significative bit of 1 is the one that is confronted with every bit of the variable
    shifted one 1 position for every circle.
    The confrontation is actually relevant only for the least significative bit of the shifted variable.
    */ 
    for (int i = 7; i >= 0; i--) {
        int bit = (c >> i) & 1;
        if (bit == 1) {
            putchar('1');
        } else {
            putchar('0');
            }
    }
    putchar('\n');

    unsigned char max = 255; // max reprentation using 8 bits: (2^8)-1 = 11111111
    printf("%d", max);
    char mix = -128; // max representation of negative numbers using 8 bits: -2^(7) = 10000000
    char max1 = 127; // max representation of positive numbers using 8 bits: (2^7)-1 = 01111111

return 0;}