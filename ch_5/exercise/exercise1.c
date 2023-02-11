// Author: mlj
// Purpose: Relation and Equality operators
// Date: 01/30/2023

#include <stdio.h>

int main(void)
{
    int i, k, j;

    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n", k);

    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);

    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);

    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + i < k);

    i = 10; j = 5;
    printf("%d\n", !i < j);

    i = 2; j = 1;
    printf("%d\n", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);

    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);

    return 0;
}