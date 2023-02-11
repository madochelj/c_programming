// Author: mlj
// Purpose: Compute the check digit of the upc number
// Date: 01/16/2023

#include <stdio.h>

struct upc
{
    int product;
    int man1;
    int man2;
    int man3;
    int man4;
    int man5;
    int prod1;
    int prod2;
    int prod3;
    int prod4;
    int prod5;
};
int main(void)
{
    int first_sum, second_sum, total;
    struct upc product1;

    // this section scans for the first digit and the first set of 5 digit and store it in seperate variable contained in a structrue
    printf("Enter the frist (single) digit: ");
    scanf("%1d", &product1.product);
    printf("Enter the first set of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &product1.man1, &product1.man2, &product1.man3, &product1.man4, &product1.man5);

    // doese the same thing that the above code does just store a second set of five digit numbers
    printf("Enter the second set of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &product1.prod1, &product1.prod2, &product1.prod3, &product1.prod4, &product1.prod5);

    // calculate a checksum value for the upc digit
    first_sum = product1.product + product1.man2 + product1.man4 + product1.prod1 + product1.prod3 + product1.prod5;
    second_sum = product1.man1 + product1.man3 + product1.man5 + product1.prod2 + product1.prod4;
    total = 3 * first_sum + second_sum; 

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}