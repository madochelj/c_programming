// Author: Madoche Louis Jeune
// Purpose: Compute and print to output the volumetric weight of a box
// Date: 01/06/2023

#include <stdio.h>

int main(void)
{
    int length = 12, width = 10, height = 8, volume;
    volume = length * width * height;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight: (pounds): %d\n", (volume + 165) / 166);

    return 0;
}