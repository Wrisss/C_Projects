/*Count Duplicate Elements
Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

#include <stdio.h>

int main(){

    int num;
    int ctr = 0;
    size_t i, j = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &num);

    printf("Input %d elements in the array\n", num);

    int arr[num];

    for (i = 1; i <= num; i++){
        
        printf("Element %d = ", i);
        scanf("%d", &arr[i-1]);
    }

    for(i = 0; i < num; i++){
        for (j = i+1; j < num; j++){
            if (arr[i] == arr[j]){
            ctr++;
            break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", ctr);

 /*   for (int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
*/

return 0;}