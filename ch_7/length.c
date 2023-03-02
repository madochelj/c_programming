/* Author: mlj
 * Date: 02/26/23
 * Purpose: calculate amount of characters contained in a sentence
 */

#include <stdio.h>

int main(void)
{
        int counter = 0;

        while (getchar() != '\n') {
                counter++;
        }

        printf("You message was %d characters long\n", counter);
        return 0;
}

