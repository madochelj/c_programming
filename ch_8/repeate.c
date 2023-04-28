/* Author: mlj
 * Date: 4/13/2023
 * Purpose:Checking if a number is repeated
 */

#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
        bool list[N] = {false};
        int bin;
        long n;

        printf("Enter a  numbers: ");
        scanf("%ld", &n);

        while (n > 0) {
                bin = n % 10;
                if (list[bin])
                        break;
                list[bin] = true;
                n /= 10;
        }

        if (n > 0) {
                printf("Repeated digit\n");
        } else {
                printf("No repeated digt\n");
        }
        return 0;
}

