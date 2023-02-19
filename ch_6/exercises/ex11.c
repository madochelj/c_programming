// author: mlj
// purpose: ex11
// date: 02/19/23

#include <stdio.h>

int main(void)
{
    int sum;
    sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;
        
        sum += 1;
    }

    printf("%d\n", sum);;

    return 0;
}