// author: mlj
// purpose: ex7
// date: 02/17/23

#include <stdio.h>

int main(void)
{
    for (int i = 9384; i > 0; i /= 10)
    {
        printf("%d\n", i);
    }
    return 0;
}