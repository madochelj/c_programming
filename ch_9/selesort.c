/* Author: mlj
 * Date: 5/11/2023
 * Purpose: sort an array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int sele_sort(int a[], int n);

int main(void)
{
        int x[N];
        int i;

        srand((unsigned) time(NULL));

        for (i = 0; i < N; i++) {
                x[i] = rand() % 100;
        }

        sele_sort(x, N);

        for (i = 0; i < N; i++) {
                printf("%d ", x[i]);
        }
        return 0;
}

int sele_sort(int a[], int n)
{
        int temp;
        int i;

        if (n < 1)
        {
                return 1;
        }
        
        for (i = 0; i < n; i++) {
                if (a[i] > a[n - 1]) {
                        temp = a[n - 1];
                        a[n - 1] = a[i];
                        a[i] = temp;
                }
        }
        return sele_sort(a, n - 1);
}
