// Author: mlj
// Purpse: Return the description for knots wind speed
// Date: 01/31/2023

#include <stdio.h>

int main(void)
{
    int knots;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &knots);

    if (knots > 0 && knots < 4)
    {
        printf("Light air\n");
    }
    else if (knots > 3 && knots < 28)
    {
        printf("Breeze\n");
    }
    else if (knots > 27 && knots < 48)
    {
        printf("Gale\n");
    }
    else if (knots > 47 && knots < 64)
    {
        printf("Storm\n");
    }
    else if (knots > 63)
    {
        printf("Hurricane\n");
    }

    return 0;
}