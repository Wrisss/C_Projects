#include <stdio.h>

void bubblesort(int arr[], int arr_len){
    for(int i = 0; i < arr_len-1; i++){
        for(int j = 0; j < arr_len-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int array[10] = {43, 10, 3, 99, 34, 29, 81, 54, 19, 50};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Array non ordinato: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    bubblesort(array, n);
    printf("\n\nArray ordinato: ");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
        }

    return 0;
}