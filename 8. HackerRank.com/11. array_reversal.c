#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    if(arr == NULL) return -1;

    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]); // &array[i] = array+i
    }

    /* int arr_cpy[10000] = {0};

    for(i = 0; i < num; i++){
        arr_cpy[i] = arr[i];
    }

    for (i = 0; i<num; i++){
        arr[i] = arr_cpy[num-1-i];
    }
 */
    // SOLUTION 2
    // Split the array in half. Every iteration swap the specular items inside the array.
    // After you reached the half just save the value inside a variable to not lose it.
    int temp; 

    for (i = 0; i < num / 2; i++) {
    temp = arr[i];
    arr[i] = arr[num - 1 - i];
    arr[num - 1 - i] = temp;
    }

    for(i = 0; i < num; i++){
    printf("%d ", *(arr+i));
    }
    
    // printf("\n");
    // printf("%d, %d", arr[num-1], arr[num-3]);

    free(arr);

return 0;}