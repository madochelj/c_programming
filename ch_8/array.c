/* Author: mlj
 * Date: 4/11/2023
 * Purpose: The basics of an one deminsional array
 */

#include <stdio.h>
#define N 10

int main(void)
{
        int sum;
        int a[N];
        a[0] = 0;

        for (int i = 0; i < N; i++) {
                a[i] = 0;
        }
        for (int i = 0; i < N; i++) {
                scanf("%d", &a[i]);
        }
        for (int i = 0; i < N; i++) {
                sum += a[i];
        }

        return 0;
}

