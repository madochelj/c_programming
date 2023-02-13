// author: mlj
// purpose: example of the while statment
// date: 02/13/23

#include <stdio.h>

int main(void)
{
    int i;
    i = 10;

    while (i > 0)
    {
        printf("T minus %d and counting\n", i);
        i--;
    }
    return 0;
}
