// Author: mlj
// Purpose: Convert 24-standard time to 12-standard time
//Date: 01/31/2023

#include <stdio.h>

int main(void)
{
    int hour_24, minute_24, hour_12, minute_12;

    printf("Entera 24 hour time: ");
    scanf("%d:%d", &hour_24, &minute_24);

    if (hour_24 <= 12)
    {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour_24, minute_24);
    }
    else
    {
        printf("Equivalent 12-hour time: %d:%d PM\n", hour_24 - 12, minute_24);
    }
    return 0;
}