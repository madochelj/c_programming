/* Author: mlj
 * Date: 3/27/2023
 * Purpose: program that counts the number of vowels (a, e, i ,o u) in a sentence
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
        char char_bin;
        int v_count = 0;

        do {
                char_bin = getchar();
                char_bin = tolower(char_bin);

                switch (char_bin) {
                        case 'a':
                        case 'e':
                        case 'i':
                        case 'o':
                        case 'u':
                                v_count += 1;
                                break;
                }
        } while (char_bin != '\n');

        printf("%d\n", v_count);
        return 0;
}

