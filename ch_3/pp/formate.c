// Author: Madoche Louis Jeune
// Purpose: Formate user inputed data 
// Date: 01/12/2023

#include <stdio.h>

int main(void)
{
    int item_number, month, day, year;
    float unit_price;

    printf("Enter Item Number: ");
    scanf("%d", &item_number);
    printf("Enter Unit Price: ");
    scanf("%f", &unit_price);
    printf("Enter Purchase Date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%.2f\t%d/%d/%d\n", item_number, unit_price, month, day, year);
    
    return 0;
}