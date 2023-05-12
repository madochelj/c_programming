/* Author: mlj
 * Date: 5/11/2023
 * Purpose: check if x and y is between 0 and n - 1
 */

#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n);

int main(void)
{
        int x, y, n;
        bool checker;

        printf("Input Three number Numbers: ");
        scanf("%d%d%d", &x, &y, &n);

        checker = check(x, y, n);

        if (checker)
                printf("In the range\n");
        else
                printf("Out the range\n");

        return 0;
}

bool check(int x, int y, int n)
{
        if (x <= 0 || y <= 0)
                return false;

        if (x > n - 1 || y > n - 1)
                return false;

        return true;
}
