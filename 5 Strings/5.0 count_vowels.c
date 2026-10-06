/*Write a program that reads one single line of text and counts how many vowels 
(a, e, i, o, u) are in that line.
*/

#include <stdio.h>

int main(){

    char vector[100];
    int i = 0;
    int count = 0;
    int c;

    while(i < 99 && (c = getchar()) != EOF && c != '\n') {
        vector[i] = c;

        if (vector[i] == 97 ||  vector[i] == 101 || vector[i] == 105 || vector[i] == 111 || vector[i] == 117){
            count++;
        }
        i++;
    }
    printf("Totale: %d", count);
    
    vector[i] = '\0';

    return 0;
}