// Author: mlj
// Purpose: Compute the largest and smallest number that the user input
// Date: 01/31/2023

#include <stdio.h>

int main(void)
{
    int bin1, bin2, bin3, bin4;

    printf(" Enter 4 sets of numbers (xx xx xx xx): ");
    scanf("%d %d %d %d", &bin1, &bin2, &bin3, &bin4);

    if (bin1 > bin2 && bin1 > bin3 && bin1 > bin4)
    {
        printf("Largest: %d\n", bin1);
    }
    else if (bin2 > bin3 && bin2 > bin4 && bin2 > bin1)
    {
        printf("Largest: %d\n", bin2);
    }
    else if (bin3 > bin4 && bin3 > bin1 && bin3 > bin2)
    {
        printf("Largest %d\n", bin3);
    }
    else
    {
        printf("Largest: %d\n", bin4);
    }

    if (bin1 < bin2 && bin1 < bin3 && bin1 < bin4)
    {
        printf("Smallest: %d\n", bin1);
    }
    else if (bin2 < bin3 && bin2 < bin4 && bin2 < bin1)
    {
        printf("Smallest: %d\n", bin2);
    }
    else if (bin3 < bin4 && bin3 < bin1 && bin3 < bin2)
    {
        printf("Smallest%d\n", bin3);
    }
    else
    {
        printf("Smallest: %d\n", bin4);
    }

    return 0;
}