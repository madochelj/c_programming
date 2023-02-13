// author: mlj
// purpose: example of the while statment
// date: 02/13/23

#include <stdio.h>

int main(void)
{
    int i;
    int n;
    i = 1;
    n = 10;

    while (i < n)
    {
        i *= 2;
        printf("%d\n", i);
    }
    
    return 0;
}