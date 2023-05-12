/* Author: mlj
 * Date: 5/11/2023
 * Purpose: Example of a resursion function
 */

#include <stdio.h>

int count_down(int x);

int main(void)
{
        int count = 10;
        count_down(count);
        return 0;
}

int count_down(int x)
{
        if (x == 0) {
                return 1;
        }
        else {
                printf("%d\n", x);
                return count_down(x - 1);
        }
}

