/* Author: mlj
 * Date: 5/10/23
 * Purpose: Test whether a number is prime
 */

#include <stdio.h>
#include <stdbool.h>

bool is_prime (int n )
{
        int diviser;

        if (n <= 1)
                return false;
        for (diviser = 2; diviser * diviser <= n; diviser++) {
                if (n % diviser == 0)
                        return false;
                return true;
        }
}

int main(void)
{
        int n;
        printf("Enter a name: ");
        scanf("%d", &n);
        if (is_prime(n))
                printf("Prime\n");
        else
                printf("Not Prime\n");
        return 0;
}

