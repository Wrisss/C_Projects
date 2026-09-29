#include <stdio.h>

/* EOF is a special sequences of characters that communicate the operating system to stop registring input
from the terminal. EOF is the abbreviation of End Of Line.
In C, EOF is a constant character that hide the value "-1".
On Windows the combination Ctrl+Z does the command.
*/

int main(){

    printf("%d\n", EOF);

    return 0;
}