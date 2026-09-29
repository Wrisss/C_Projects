#include <stdio.h>
#include <windows.h>

int main(){
SetConsoleOutputCP(CP_UTF8);

    char a, *b, **c, ***d;

    a = 10; 
    b = &a; // OK!
    c = &b; // OK!
    d = &c;
//    b = &c; // OK! But Warning
//    b = &b; // OK! But Warning

    printf("L'indirizzo di memoria di 'a' è : %p", &a);
    printf("\nL'indirizzo di memroia di 'b' è  : %p", &b);
    printf("\nL'indirizzo di memoria di 'c' è :  %p", &c);
    printf("\nL'indirizzo di memoria di 'd' è : %p", &d);

    printf("\n\nb contiene: %p", b);
    printf(" (l'indirizzo di memoria di a)");
    printf("\nc contiene: %p", c);
    printf(" (l'indirizzo di memoria di b)");
    printf("\nd contiene: %p", d);
    printf(" (l'indirizzo di memoria di c)");

    printf("\n\nTest: *c = %p", *c); // una indirezione,
    printf(" (il contenuto della variabile b, che è l'indirizzo di memoria di a)");
    printf("\nTest: **c = %d", **c);

    return 0;
}
