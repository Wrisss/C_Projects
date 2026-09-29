#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int c, linecount, wordcount, charscount, state;

    state = OUT;
    linecount = wordcount = charscount = 0;

    while (( c = getchar()) != EOF){
        ++charscount;

        if (c == '\n'){
            ++linecount;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;}

         if (state == OUT){
            state = IN;
            ++wordcount;
        }
    }

    printf("%d %d %d", linecount, wordcount, charscount);

    return 0;
}