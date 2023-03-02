/* Author: mlj
 * Date:02/26/23
 * Purpose: read and write to stdio using get and put char
 */

#include <stdio.h>

int main(void)
{
        char ch;
        char newline;

        /*
        newline = '\n';
        ch = getchar();
        putchar(ch);
        putchar(newline);
        */

        do {
                ch = getchar();
                putchar(ch);
        } while (ch != '\n');
        return 0;
}

