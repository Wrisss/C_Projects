// a char type can be thougth as a letter, a number or an entire string.

#include <stdio.h>

int main(){

//  char = A gives compiling error. 
    char c = 'A';
    char *s = "A";  // s is a string so is an array of char. Initialize a string with the double quotes. 
                    // s[2] = {"A","\0"}
    printf("%c\n", c);
    printf("%d\n", c); // 65 is the codification of A for UNICODE
    printf("%s\n\n", s); // print as a string


    char d = 7;
    printf("%d\n", d);
    printf("%c\n", '0'+7); // to print 7 using ASCII math 
    printf("[BELL]%c\n\n", d); // actually print an invisbile char which is [BELL] using the UNICODE codification

    char e = '8';
    
    printf("%d\n", e);
    printf("%c\n", e);
}
