/* Author: mlj
 * Date:2/26/23
 * Purpose: print the user input to stdio
 */

#include <stdio.h>

int main(void)
{
        char input;

        do {
                scanf("%c" ,&input);
                printf("%c", input);
        } while (input != '\n');
        return 0;
}

