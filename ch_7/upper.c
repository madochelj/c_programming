// author: mlj
// purpose: formate lower case characters to upper case
// date: 02/26/23
//
#include <stdio.h>
#include <ctype.h>

int main(void) 
{
        char ch = 'a';

        ch = toupper(ch);

        printf("%c\n", ch);
        return 0;
}
