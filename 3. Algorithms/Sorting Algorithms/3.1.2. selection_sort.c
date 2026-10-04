#include <stdio.h>

void selectionSort(int arr[], int arr_size) {

    // Start with the whole array as unsored and one by
  	// one move boundary of unsorted subarray towards right
    for (int i = 0; i < arr_size - 1; i++) {

        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < arr_size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first
        // element in the unsorted part
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){

    int array[10] = {43, 10, 3, 99, 34, 29, 81, 54, 19, 50};
    int array_size = sizeof(array)/sizeof(array[0]);

    printf("Array non ordinato: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    selectionSort(array, array_size);
    printf("\n\nArray ordinato: ");
    for (int i = 0; i < array_size; i++){
        printf("%d ", array[i]);
    }

    return 0;
}