/* Author: mlj
 * Date:
 * Purpose:
 */

#include <stdio.h>
#define N 40

int main(void)
{
        long fibi_numbers[N] = {0,1};
        int i;

        for (i = 2; i < N - 2; i++) {
                fibi_numbers[i] = fibi_numbers[i - 2] + fibi_numbers[i - 1];
                printf("%li ", fibi_numbers[i - 2]);
        }
        return 0;
}

