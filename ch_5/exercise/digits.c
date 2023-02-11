// Author: mlj
// Purpose: Calculate the digits contained in a integer
// Date: 01/31/2023

#include <stdio.h>

int main(void)
{
    int bin, digits;

    printf("Enter a number: ");
    scanf("%d", &bin);

    if (bin > 0 && bin < 10)
        digits = 1;
    else if (bin > 9 && bin < 100)
        digits = 2;
    else if (bin > 99 && bin < 1000)
        digits = 3;
    else
        printf("Number out of range\n");

    printf("The number %d has %d digits\n", bin, digits);
    return 0;
}