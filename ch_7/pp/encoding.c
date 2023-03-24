/* Author: mlj
 * Date:
 * Purpose:
 */

#include <stdio.h>

int main(void)
{
        char u_input;


        do {
                scanf("%c", &u_input);

                if (u_input >= 'A' && u_input <= 'C') {
                        printf("2");
                } else if (u_input >= 'D' && u_input <= 'F') {
                        printf("3");
                } else if (u_input >= 'G' && u_input <= 'I') {
                        printf("4");
                } else if (u_input >= 'J' && u_input <= 'L') {
                        printf("5");
                } else if (u_input >= 'M' && u_input <= 'O') {
                        printf("6");
                } else if (u_input >= 'P' && u_input <= 'S') {
                        printf("7");;
                } else if (u_input >= 'T' && u_input <= 'V') {
                        printf("8");
                } else if (u_input >= 'W' && u_input <= 'Y') {
                        printf("8");
                }
                else if (u_input < 'A' || u_input > 'Y'){
                        printf("%c", u_input);
                }
        } while (u_input != '\n');

        printf("\n");
        return 0;
}

