#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // in C strings are allocated as arrays of char
    char *s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    while(*s != '\0'){ // traverse the array of string until the end of the string highlithed by the null terminator "\0"
        printf("%c", *s); // print every char of the string using the pointer to the elements of the array
        if (*s == ' '){printf("\n");} // condition that modify the istruction inside the cycle
        s++;} 

return 0;}
