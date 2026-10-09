#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i = 0;
    

    scanf("%d", &n);

    int* arr = malloc(n*sizeof(int));
    if(arr == NULL) return -1;

    for (i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }

    int sum = arr[0];    // if I want to inititialize sum with the first element of the array if to start the cyle
                        // one index forward otherwise the first element of the array is added twice.
    for(i = 1; i < n; i++){
        sum += arr[i];
    }
    
    printf("%d", sum);

    free(arr);

return 0;}