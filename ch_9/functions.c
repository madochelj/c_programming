/* Author: mlj
 * Date: 5/11/2023
 * Purpose: returns largest element ,average and number of postive numbers in a array
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int average(char a[], int x);
int largest(char a[], int y);
int positive(char a[], int z);

int main(void)
{
        int _average_, _largest_, _positive_;
        srand(time(NULL));
        char a[N];

        for (int i = 0; i < N; i++) {
                a[i] = rand() % 1000;
        }
        _average_ = average(a, N);
        _largest_ = largest(a,N);
        _positive_ = positive(a, N);

        printf("%d\n", _average_);
        printf("%d\n", _largest_);
        printf("%d\n", _positive_);
        return 0;
}

int average(char a[], int x)
{
        int sum = 0;
        int i;

        for (i = 0; i < x; i++) {
                sum += a[i];
        }
        return sum / x;
}

int largest(char a[], int x)
{
        int largest = 0;
        int i;

        for (i = 0; i < x; i++) {
                if (largest < a[i])
                        largest = a[i];
        }
        return largest;
}

int positive(char a[], int x)
{
        int counter = 0;
        int i;

        for (i = 0; i < x; i++) {
                if (a[i] > 0)
                        counter++;
        }
        return counter;
}
