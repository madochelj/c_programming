// author: mlj
// purpose: ex10
// date: 02/17/23

#include <stdio.h>

int main(void)
{
    int i;
    i = 0;

    while (i < 10)
    {
        if (i == 5)
        {
            goto skip;
        }

        printf("%d\n", i);
        skip: i++;
    }
    return 0;
}