/* Author: mlj
 * Date: 4/29/2023
 * Purpose: Encode a message
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SEN 100

int main(void)
{
        int i;
        int str_len;
        char temp_message[SEN];

        //this find the length of the string creates a new array with the length of the string and copies the source array into a new array with a better size
        scanf("%s", temp_message);
        str_len = strlen(temp_message); 
        char message[str_len];
        strcpy(message, temp_message);

        for (i = 0; i < str_len; i++) {
                message[i] = toupper(message[i]);
                switch (message[i]) {
                        case 65:
                                message[i] = '4';
                                break;
                        case 66:
                                message[i] =  '8';
                                break;
                        case 69:
                                message[i] =  '3';
                                break;
                        case 73:
                                message[i] =  '1';
                                break;
                        case 79:
                                message[i] =  '0';
                                break;
                        case 83:
                                message[i] =  '5';
                                break;
                        }
        }

        printf("%s\n", message);
        return 0;
}
