#include <stdio.h>

int max_of_four(int,int,int,int);

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d", max_of_four(a,b,c,d));

return 0;}

int max_of_four(int a, int b, int c, int d){
    int max = a;

    if(a>b && a>c && a>d){
        return max;}
    else if (b>a && b>c && b>c){
        max = b;
    return max;}
    else if (c>a && c>b && c>d){
        max = c;
    return max;}
    else {
    max = d;
    return max;}
}
