// Author: mlj
// Pupose: Read two digit integer from terminal and reverse
// Date: 01/23/2023

#include <stdio.h>

int main(void)
{
    int wholedigit, digit1, digit2, digit3;

    printf("Enter a two digit number: ");
    scanf("%d", &wholedigit);

    digit3 = wholedigit % 10;
    wholedigit /= 10;

    digit2 = wholedigit % 10; 
    wholedigit /= 10;

    digit1 = wholedigit;

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}