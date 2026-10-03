#include <stdio.h>
#include <string.h>

#define MAX 20

int main(){

    char s[MAX];
    char r[MAX];
    
    int lr, ls, pos;
    int i;
    int trovato, diversi ;

    ls = strlen(s);
    lr = strlen(r);
    trovato = 0 ;

for(pos=0; pos<=ls-lr; pos++){
/* confronta r[0...lr-1] con s[pos...pos+lr-1] */
    diversi = 0 ;
    for(i=0; i<lr; i++)
        if(r[i]!=s[pos+i]) {diversi = 1;}
        if(diversi==0) {trovato=1;}
}
if(trovato==1)
printf("Trovato!\n");

return 0;

}