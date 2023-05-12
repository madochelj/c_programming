/* Author: mlj
 * Date: 5/11/2023
 * Purpose: return the interger when give the position in a integer
 */

#include <stdio.h>

int num_digits(int input);
int position(int x, int y);

int main(void)
{
        int user_input, digits, num_position;
        printf("Input a number: ");
        scanf("%d%d", &user_input, &digits);
        num_position = position(user_input, digits);

        printf("%d\n", num_position);
        return 0;
}

int num_digits(int input)
{
        int digits = 0;

        while (input != 0) {
                input /= 10;
                digits++;
        }
        return digits;
}

int position(int input, int shifter)
{
        int digits, location, i;

        if (shifter > num_digits(input))
                return 0;

        for (i = 0; i < shifter; i++) {
                location = input % 10;
                input /= 10;
        }
        
        return location;
}
