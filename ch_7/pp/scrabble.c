/* Author: mlj
 * Date: 3/27/2023
 * Purpose: assign characters numerical scores for the word game scrabble
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
        char u_input;
        int game_score = 0;

        do {
                u_input = getchar();
                u_input = toupper(u_input);  

                switch (u_input) {
                        case 65:
                        case 45:
                        case 49:
                        case 76:
                        case 78:
                        case 79:
                        case 82:
                        case 83:
                        case 84:
                           game_score += 1;
                           break;
                        case 68:
                        case 71:
                           game_score += 2;
                           break;
                        case 67:
                        case 77:
                        case 80:
                           game_score += 3;
                           break;
                        case 70:
                        case 72:
                        case 86:
                        case 87:
                        case 89:
                           game_score += 4;
                        case 75:
                           game_score += 5;
                           break;
                        case 74:
                        case 88:
                           game_score += 8;
                           break;
                        case 90:
                        case 81:
                           game_score += 10;
                           break;
                }
        } while (u_input != '\n');

        printf("%d\n", game_score);
        return 0;
}
