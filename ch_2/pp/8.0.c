// Author: Madoche Louis Jeune
// Purpose: Calculate the intrest rate after first 3 months
// Date 01/07/2023

#include <stdio.h>

int main(void)
{
    float loan, intrest_rate, monthly_payment, monthly_intrest, monthly_increase;

    printf("Enter Loan Amount: ");
    scanf("%f", &loan);
    printf("Enter Intrest Rate: ");
    scanf("%f", &intrest_rate);
    printf("Enter Monthly Payment: ");
    scanf("%f", &monthly_payment);

    intrest_rate = intrest_rate / 100.0f;
    monthly_intrest = intrest_rate / 12.0f;
    monthly_increase = loan * monthly_intrest;

    loan = (loan - monthly_payment) + monthly_increase;

    printf("%.2f\n", loan);

    loan = (loan - monthly_payment) + monthly_increase;

    printf("%.2f\n", loan);

    loan = (loan - monthly_payment) + monthly_increase;

    printf("%.2f\n", loan);

    return 0;
}