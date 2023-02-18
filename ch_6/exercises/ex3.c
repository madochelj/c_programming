// author: mlj
// purpose: ex1
// date: 02/16/23

#include <stdio.h>

int main(void)
{
    int i;
    int j;

    for (i = 5, j = i - 1; i > 0, j > 0; --i, j--)
        printf("%d\n", i);

    return 0;
}