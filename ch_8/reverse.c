/* Author: mlj
 * Date: 4/13/2023
 * Purpose: Use an array to reverse a list of numbers
 */

#include <stdio.h>

#define N 10

int main(void)
{
        int list[N], i;

        printf("Enter %d numbers: ", N);
        for (int i = 0; i < N; i++) {
                scanf("%d", &list[i]);
        }
        
        printf("Print in revse order: ");
        for (int i = N - 1; i >= 0; i--) {
                printf(" %d", list[i]);
        }
        printf("\n");
        return 0;
}

