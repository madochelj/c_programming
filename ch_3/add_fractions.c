// Author: Madoche Louis Jeune
// Purpose: Adding Fractions using scanf
// Date: 01/08/2023

#include <stdio.h>

int main(void)
{
    int num1, dum1, num2, dum2, result_num, result_dum;

    printf("Enter First Fractoin: ");
    scanf("%d/%d", &num1, &dum1);
    printf("Enter Second Fraction: ");
    scanf("%d/%d", &num2, &dum2);

    result_num = num1 * dum2 + num2 * dum1;
    result_dum = dum1 * dum2;

    printf("The sum is: %d/%d\n", result_num, result_dum);
    return 0;
}