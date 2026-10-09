// Given a string, consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <stdlib.h>

int main(){

    char *s = malloc(1000*sizeof(char));

    scanf(" %999[^\n]", s);

    int arr_freq[10] = {0};
    char *p = s;

/*  GENIUS SOLUTION
    only one iteration of the string: if found a number litteral convert it to a number using ASCII math.

    while(*p != '\0'){
        if (*p >= '0' && *p <= '9'){ is the character pointed is literal number between 0 and 9
        int cifra = *p - '0'; convert a number litteral to obtain an int you can use it as an array index!
        arr_freq[cifra]++;} add +1 everytime the if condition is verified
    } 
    EVEN MORE ELEGANT
    if (*p >= '0' && *p <= '9'){
    arr_freq[*p - '0']++;}
    
 */
    for (int i = 0; i<10; i++ ){
        int ctr = 0;    // counter is outer of while so is not getting resetted
        p = s;          // you need to restar the string at every cycle because after the first iteration
                        // *s points to the end of the string 
        while(*p != '\0'){
            if(*p == '0' + i){
                ctr++;
                }
        p++;}

    arr_freq[i] = ctr;
}

    for (int i = 0; i<10; i++){
    printf("%d ", arr_freq[i]);
    }

    free(s);
return 0;}
