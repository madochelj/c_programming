/* Author: mlj
 * Date: 4/13/2023
 * Purpose:The rules of initializeing a array
 */

#include <stdio.h>

int main(void)
{
        int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        int b[10] = {1, 2, 3, 4, 5, 6};

        int c[0] = {0};

        int d[] = {1, 3, 4, 5, 6, 7};

        int e[] = {[15] = 7, [2] = 29, [9] = 7, [14] = 48};
        return 0;
}

