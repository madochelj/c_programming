// Author: mlj
// Purpose: program to compute the tax of taxable income
// Date: 01/31/2023

#include <stdio.h>

int main(void)
{
    float taxable_income, tax_due;

    printf("Enter taxable Income: ");
    scanf("%f", &taxable_income);

    if (taxable_income < 750.00f)
    {
        tax_due = taxable_income * .01f;
    }
    else if (taxable_income < 2250.00f)
    {
        tax_due = taxable_income * .02f + 7.50f; 
    }
    else if (taxable_income < 3750.00f)
    {
        tax_due = taxable_income * .03f + 37.50f;
    }
    else if (taxable_income < 5250.00f)
    {
        tax_due = taxable_income * .04f + 82.50f;
    }
    else if (taxable_income < 7000.00f)
    {
        tax_due = taxable_income * .05f + 142.50f;
    }
    else
    {
        tax_due = taxable_income * .06 + 230.00f;
    }

    printf("Tax due: %f\n", tax_due);

    return 0;
}