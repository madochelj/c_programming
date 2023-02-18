// author: mlj
// purpose: ex1
// date: 02/16/23

#include <stdio.h>

int main(void)
{
    int i;
    i = 9384;

    do
    {
        printf("%d\n", i);
        i /= 10;
    } while (i > 0);

    return 0;
}