/* Author: mlj
 * Date: 5/11/2023
 * Purpose: A mystery functions
 */

#include <stdio.h>

void pb(int n);

int main(void)
{
        pb(1000);
        return 0;
}

void pb(int n)
{
        if (n != 0) {
                pb(n / 2);
                putchar('0' + n % 2);
        }
}

