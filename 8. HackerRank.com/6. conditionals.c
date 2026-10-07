/* Task
For each integer n in the interval [a,b] (given as input) :
    If 1 <= n < 9, then print the English representation of it in lowercase. 
    That is "one" for 1,"two" for 2, and so on.
    Else if n >=9 and it is an even number, then print "even".
    Else if n >=9 and it is an odd number, then print "odd".
 */

 #include <stdio.h>

 int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b){
        printf("first must be greater than second one\n");
        scanf("%d %d", &a, &b);
    }

    for (int i = a; i <=b; i++){
        if (i == 0){
            printf("zero\n");
        }
        else if (i == 1){
            printf("one\n");
        }
        else if (i == 2){
            printf("two\n");
        }
        else if (i == 3){
            printf("three\n");
        }
        else if (i == 4){
            printf("four\n");
        }
        else if (i == 5){
            printf("five\n");
        }
        else if (i == 6){
            printf("six\n");
        }
        else if (i == 7){
            printf("seven\n");
        }
        else if (i == 8){
            printf("eight\n");
        }
        else if (i == 9){
            printf("nine\n");
        }
        else if (i>9 && i % 2 == 1){
            printf("odd\n");
        } else {printf("even\n");}
    }

return 0;}