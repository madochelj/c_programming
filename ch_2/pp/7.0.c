// Author: Madoche Louis Jeune
// Purpose: Computers the biggest bills give a dollar amount
// Date: 01/06/2023 

#include <stdio.h>

int main(void)
{
    int tw_bills, t_bills, f_bills, o_bills, holder, dollar_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    tw_bills = dollar_amount / 20;
    dollar_amount = dollar_amount - (tw_bills * 20);
    t_bills = dollar_amount / 10;
    dollar_amount = dollar_amount - (t_bills * 10);
    f_bills = dollar_amount / 10;
    dollar_amount = dollar_amount - (f_bills * 5);
    o_bills = dollar_amount / 1;


    printf("$20 bills: %d\n", tw_bills);
    printf("$10 bills: %d\n", t_bills);
    printf("$5 bills: %d\n", f_bills);
    printf("$1 bills: %d\n", o_bills);
    return 0;
}