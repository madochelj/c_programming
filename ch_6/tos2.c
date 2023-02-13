// author: mlj
// purpose: example of the while statment
// date: 02/13/23

#include <stdio.h>

int main(void)
{
    int i;
    int x;
    x = 1;

    printf("This program prints a table of square.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &i);

    for (int n = 0; n < i; n++)
    {
        printf("%10d%10d\n", x, x * x);
        x++;
    }

    return 0;
}