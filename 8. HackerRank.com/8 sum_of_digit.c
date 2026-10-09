/* Task
Given a five digit integer, print the sum of its digits. 
 */

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    if(n < 10000 || n > 99999){
        scanf("%d", &n);
    }

    int fir = n % 10;
    int sec = (n / 10) % 10;
    int third = (n / 100) % 10;
    int four = (n / 1000) % 10;
    int fifth = n / 10000;

    int sum = fir+sec+third+four+fifth;

    printf("%d", sum);

return 0;}