#include <stdio.h>
#define START_IDX 2
#define ARR_LEN 5

int main(){

    int arr[ARR_LEN] = {10,20,30,40,50};

    printf("ARRAY ORIGINALLY INITIALIZATED\n");
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        printf("%d\n", arr[i]);
    }
//    printf("%d", arr[30]);
    // to make a circular array from a linear one a we need to know: 
    // - the starting index 
    // - the number of elements inside the array
    // with this information we can do logic index shifting without modifying the array   

    printf("\n\nINDEX STARTING AT THE 3RD ELEMENT\n");
    for (int i = 0; i < ARR_LEN; i++){
        int pos = (START_IDX + i) % ARR_LEN;
        printf("%d\n", arr[pos]);
    } 

    // shift the starting index one position forward
    printf("\nINDEX SHIFTED OF 1 POSITION FORWARD\n");
    int start_shifted = (START_IDX+1) % ARR_LEN;
    
    for (int i = 0; i < ARR_LEN; i++){    
    int pos = (start_shifted + i) % ARR_LEN;
        printf("%d\n", arr[pos]);
    }

    
    printf("\nINDEX SHIFTED OF 1 POSITION BACKWARD\n");
    start_shifted = START_IDX;
    start_shifted = START_IDX-1;

    for (int i = 0; i < ARR_LEN; i++){
    int pos = (start_shifted + i) % ARR_LEN;
        printf("%d\n", arr[pos]);
    }

return 0;}