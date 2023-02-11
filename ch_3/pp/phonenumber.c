// Author: Madoche Louis Jeune
// Purpose: Break Down Phone Number
// Date: 01/12/2023

#include <stdio.h>

int main(void)
{
    int first_column, second_column, thrid_column;

    printf("Enter Phone Number: ");
    scanf("(%d) %d-%d", &first_column, &second_column, &thrid_column);

    printf("You Entered: %d.%d.%d\n", first_column, second_column, thrid_column);
    return 0;
}