// Author: Madoche Louis Jeune
// Purpose: Store ISBN Numbers and break it down
// Date: 01/12/2023

#include <stdio.h>

int main(void)
{
    int first_column, second_column, third_column, fourth_column, fifth_column;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &first_column, &second_column, &third_column, &fourth_column, &fifth_column);
    printf("GS1 prefix: %d\n", first_column);
    printf("Group Identifier: %d\n", second_column);
    printf("Publisher Code: %d\n", third_column);
    printf("Item Number: %d\n", fourth_column);
    printf("Check Digit: %d\n", fifth_column);

    return 0;
}