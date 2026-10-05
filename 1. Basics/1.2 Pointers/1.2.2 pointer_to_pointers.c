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

    printf("Address memory of 'a' is: %p", &a);
    printf("\nAdddress memorory of 'b' is: %p", &b);
    printf("\nAddress memory of 'c' is:  %p", &c);
    printf("\nAddress memory of 'd' is: %p", &d);

    printf("\n\nb contains: %p", b);
    printf(" (address memory of a)");
    printf("\nc contains: %p", c);
    printf(" (address memory of b)");
    printf("\nd contains: %p", d);
    printf(" (address memory of c)");

    printf("\n\nTest: *c = %p", *c); // one indirection
    printf(" (the content of variable b, which is the memory address of a)");
    printf("\nTest: **c = %d", **c);

    return 0;
}
