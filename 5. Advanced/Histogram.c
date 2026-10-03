#include <stdio.h>

int main(){

    int c, i, j;
    int dvector[10] = {0};

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++dvector[c-'0'];
        }
    }
        for (i = 0; i < 10; i++){
            printf("%d: ", i);

            for (j = 0; j < dvector[i]; j++){
               printf("=");
            }
            printf("\n");
        }
        return 0;}