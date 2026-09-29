#include <stdio.h>

void insertion_sort(int arr[], int size_array){
    if(size_array <= 1)
		return;
	int i, j, key;
	
	for(i = 1; i < size_array; i++)
	{
		j = i;
		key = arr[i];
		while(j > 0 && arr[j - 1] > key)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = key;
	}
}

int main(){

    int array[10] = {43, 10, 3, 99, 34, 29, 81, 54, 19, 50};
    int size_array = sizeof(array)/sizeof(array[0]);

    printf("Array non ordinato: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    insertion_sort(array, size_array);
    printf("\n\nArray ordinato: ");
    for (int i = 0; i < size_array; i++){
        printf("%d ", array[i]);
    }


    return 0;
}