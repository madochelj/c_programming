// Author: Madoche Louis Jeune
// Purpose: Print formated strings
// Date: 01/08/2023

#include <stdio.h>

int main(void)
{
    int i;
    float y;

    i = 40;
    y = 389.2f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", y, y, y, y);
    
    return 0;
}
   
   