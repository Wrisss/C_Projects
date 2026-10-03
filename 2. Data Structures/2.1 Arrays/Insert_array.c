#include <stdio.h>

int main(){

    int arr[] = {10,20,30,40,50,60};
    int arr_copy[10];

    // copying array
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        arr_copy[i] = arr[i];
    }

    printf("STARTING ARRAY\n");
    for (int i = 0; i < (sizeof(arr)/ sizeof(arr[0])); i++){
    printf("%d ", arr_copy[i]);
    }

    printf("\n\n");

    // to insert one element inside the array we must create a copy of it
    // INSERT AT THE END
    // retrieve the capacity of the array
    int arr_capacity = (sizeof(arr_copy)/ sizeof(arr_copy[0]));\
    // printf("%d\n", arr_capacity);

    int arr_len = (sizeof(arr) / sizeof(arr[0]));
    // printf("%d\n", arr_len);

    // printf("%d\n", arr_copy[7]);
    if (arr_len < arr_capacity){
    arr_copy[arr_len] = 100;
    arr_len++;
    }
    // printf("%d\n", arr_copy[7]);
    printf("INSERT AT THE END\n");
    for (int i = 0; i < arr_len; i++){
        printf("%d ", arr_copy[i]);
    
    }

        printf("\n\n");
    //INSERT AT THE START
    // shift one position on the right for all the elements of the array
    if (arr_len < arr_capacity){
        for (int i = arr_len; i >= 1; i-- ){
        arr_copy[i] = arr_copy[i-1];        
        }
    arr_copy[0] = 1;
    arr_len++;}
    

//    printf("%d\n", arr_copy[0]);
    printf("INSERT AT THE START\n");
    for (int i = 0; i < arr_len; i++ ){
        printf("%d ", arr_copy[i]);
    }
    printf("\n\n");
    //INSERT AT N POSITION
    //insert after the 5th index position
    
    //printf("\n%d\n", arr_len);
    //printf("\n%d\n", arr_copy[7]);
    // printf("\n%d\n", ((sizeof(arr_copy)/(arr_copy[0])) );

 /*    if (arr_len < arr_capacity){
    for (int i = arr_len; i > ((sizeof(arr_len)/sizeof(arr_len))+ 3); i--){
        arr_copy[i] = arr_copy[i-1];}
    
    arr_copy[5] = 45;
    arr_len++;}*/

    if(arr_len < arr_capacity){
        int pos = 5;
        for (int i = arr_len; i > pos; i--){
            arr_copy[i] = arr_copy[i-1];
            }
    arr_copy[pos] = 45;
    arr_len++;}

    printf("INSERT AT THE 5TH INDEX\n");
    for(int i = 0; i < arr_len; i++){
        printf("%d ", arr_copy[i]);
    }

return 0;}