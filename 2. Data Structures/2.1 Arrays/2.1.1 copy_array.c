#include <stdio.h>

int main(){

    int arr[] = {10,20,30,40,50,60};
    int arr_copy[10] = {0};
    
//    int len_arr = sizeof(arr) / sizeof(arr[0]);

//    printf("%d", len_arr);

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        arr_copy[i] = arr[i];
    }

    for (int i = 0; i <(sizeof(arr) / sizeof(arr[0])); i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    for (int i = 0; i <(sizeof(arr) / sizeof(arr[0])); i++){
        printf("%d ", arr_copy[i]);
    }

return 0;}