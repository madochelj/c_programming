// author: mlj
// purpose: ex5
// date: 02/16/23

#include <stdio.h>

int main(void)
{
    int i;
    i = 0;

    while (i < 10)
    {
        printf("%d", i);
        i++;
    }

    printf("\n");

    i = 0;

    for(; i < 10;)
    {
        printf("%d", i);
        i++;
    }
    
    printf("\n");

    i = 0;

    do
    {
        printf("%d");
        i++;
    } while (i < 10);

    return 0;
}