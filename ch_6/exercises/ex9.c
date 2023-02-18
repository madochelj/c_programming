// author: mlj
// purpose: ex9
// date: 02/17/23

#include <stdio.h>

int main(void)
{
    int i;
    i = 10;

    while (i >= 1)
    {
        printf("%d\n", i++);
        i /= 2;
    }
    return 0;
}