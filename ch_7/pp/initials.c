/* Author: mlj
 * Date:3/28/2023
 * Purpose:program that ask for name and writes last names with first initall
 */

#include <stdio.h>

int main(void)
{
        char f_initial;
        char l_name;
        int logic = 1;

        scanf("%c", &f_initial);

        while (logic) {
                scanf("%c", &l_name);
                if (l_name == ' ') {
                        do {
                                scanf("%c", &l_name);;
                                printf("%c", l_name);
                        } while (l_name != '\n');
                        logic = 0;
                }
        }
        printf("%c", f_initial);
        return 0;
}

