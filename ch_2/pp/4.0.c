// Author: Madoche Louis Jeune
// Purpose: Computes 5 percent tax
// Date: 01/06/2023 

#include <stdio.h>
#define TAX .05f

int main(void)
{
    float pre_tax;
    float post_tax;

    printf("Enter an amount: ");
    scanf("%f", &pre_tax);

    post_tax = pre_tax + (pre_tax * TAX); 

    printf("With tax added: %.2f\n", post_tax);
    return 0;
}