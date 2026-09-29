/*
write a program that counts how many sequences of consecutive digits 
appear in the input. For example, in the text "abc123def45gh6ij" 
there are three sequences of digits: "123", "45", and "6". 
Your program should output just the number 3.*/

#include <stdio.h>
#define NONCONS 0
#define CONS 1

int main(){

    int c, state;
    int consdigits = 0;

    state = NONCONS;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9' ){
            if (state == NONCONS){
                ++consdigits;
                state = CONS;}
            
        } else state = NONCONS;
    }
    printf("Number of consecutive digits is: %d", consdigits);

    return 0;
}