/*Complete the function void update(int *a,int *b). 
It receives two integer pointers, int* a and int* b. 
Set the value of to their sum, and to their absolute difference. 
There is no return value, and no return statement is needed.
*/

void update(int*, int*);

#include <stdio.h>

int main(){
    int a,b;
    int* pa = &a; 
    int* pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

return 0;}

void update(int* a, int* b){
        int c = (*a+*b);
        int d = (*a-*b);
        *a = c;
        if (d<0){
            d = -d;
            *b = d;
        } else {*b = d;}
}