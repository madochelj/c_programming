// Author: mlj
// Purpose: Exercises
// Date: 01/30/2023

#include <stdio.h>

int main(void)
{
    int i = 1;

    switch (i % 3)
    {
        case 0: printf("Zero\n");
        case 1: printf("One\n");
        case 2: printf("Twon\n");
    }
    
    int area_code = 229;

    switch (area_code)
    {
        case 229:
            printf("Albany\n");
            break;
        case 404:
        case 470:
        case 678:
        case 770:
            printf("Atlanta\n");
            break;
        case 706:
        case 762:
            printf("Columbus\n");
            break;
        case 478:
            printf("Macon\n");
            break;
        case 912:
            printf("Savannahn\n");
            break;
        default:
            printf("Area Code not recongnized\n");
            break;
    }

    return 0;
}
