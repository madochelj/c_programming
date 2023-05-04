/* Author: mlj
 * Date: 4/13/2023
 * Purpose:Checking if a number is repeated
 */

#include <stdio.h>
#include <stdbool.h>

#define N 10

int checker(void);

int main(void)
{
        bool repeate;

        do {
                checker();
                printf("\n0 to stop 1 to continue: ");
                scanf("%d", &repeate);
        } while (repeate);

        return 0;
}

int checker(void)
{
        int list[N] = {false};
        int bin;
        long n;

        printf("Enter a  numbers: ");
        scanf("%ld", &n);

        while (n > 0) {
                bin = n % 10;
                list[bin] += 1;
                n /= 10;
        }

        printf("Digit: \t\t");
        for (int i = 0; i < N; i++) {
                printf("%d ", i);
        }

        printf("\n");
        printf("Occurrenes: \t");
        for (int i = 0; i < N; i++) {
                printf("%d ",list[i]);
        }
        printf("\n");

        return 0;
}
