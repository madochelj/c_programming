/* Author: mlj
 * Date: 5/11/2023
 * Purpose: Using a qucksort alorithum to sort a array of numbers
 */

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);

int main(void)
{
        int a[N], i;

        printf("Enter %d numbers to be sorted: ", N);

        for (i = 0; i < N; i++) {
                scanf("%d", &a[i]);
        }

        quicksort(a, 0, N - 1);
        return 0;
}

void quicksort(int a[], int low, int high)
{
        int middle;

        if (low >= high) return;

}
