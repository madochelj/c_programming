/* Author: mlj
 * Date:
 * Purpose:
 */

#include <stdio.h>

int num_digits(int input);

int main(void)
{
        int input, output;

        printf("Input a integer: ");
        scanf("%d", &input);
        output = num_digits(input);

        printf("%d digits\n", output);
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

