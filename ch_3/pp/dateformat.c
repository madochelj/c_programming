// Author: Madoche Louis Jeune
// Purpose: Read date in the mm/dd/yyyy format
// Date: 01/12/2023

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter Date: (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%d%d", month,day,year);
    return 0;
}
