#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    
    int *vec = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        *(vec+i) = i+10;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", *(vec+i));
    }

    printf("\n");
    // same result of the block above
    for (int i = 0; i < n; i++){
        printf("%d ", vec[i]);
    }

}