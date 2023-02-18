 // author: mlj
// purpose: ex7
// date: 02/17/23

#include <stdio.h>

int main(void)
{
    for (int i = 10; i >= 1; i /= 2)
    {
        printf("%d\n", i++);
    }
    return 0;
}