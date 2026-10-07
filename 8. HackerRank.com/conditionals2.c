/* Given a positive integer denoting n, do the following:

    If 1 <= n < 9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
    If n > 9, print Greater than 9.
 */

 #include <stdio.h>

 int main(){

    int a;
    scanf("%d", &a);

    if (a>=0 && a<=9){
        if (a == 0){
            printf("zero\n");
        }
        else if (a == 1){
            printf("one\n");
        }
        else if (a == 2){
            printf("two\n");
        }
        else if (a == 3){
            printf("three\n");
        }
        else if (a == 4){
            printf("four\n");
        }
        else if (a == 5){
            printf("five\n");
        }
        else if (a == 6){
            printf("six\n");
        }
        else if (a == 7){
            printf("seven\n");
        }
        else if (a == 8){
            printf("eight\n");
        }
        else if (a == 9){
            printf("nine\n");
        }

    } else printf("Greater than 9");

return 0;}