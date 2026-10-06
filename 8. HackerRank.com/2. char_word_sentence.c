#include <stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);
    
    char s[100];
    scanf("%s", s);
    scanf("\n");
    
    char sen[100];
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

return 0;}  