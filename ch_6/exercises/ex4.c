// author: mlj
// purpose: ex4
// date: 02/16/23

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
        printf("%d", i);
    printf("\t");
    for (int i = 0; i < 10; ++i)
        printf("%d", i);
    printf("\t");
    for (int i = 0; i++ < 10;)
        printf("%d", i);
    printf("\t");

    return 0;
}