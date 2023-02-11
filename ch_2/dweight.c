// Author: Madoche Louis Jeune
// Purpose: Compute and print to output the volumetric weight of a box
// Date: 01/06/2023

#include <stdio.h>

int main(void)
{
    // int length, width, height, volume, weight;

    int length = 12;
    int width = 10;
    int height = 8;
    int volume = length * width * height;
    // weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    // printf("Dimensional Weight: (pounds): %d\n", weight);

    return 0;
}