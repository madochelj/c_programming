// Author: Madoche Louis Jeune
// Purpose: Calculates the dimensional weight of a box using user input
// Date: 01/06/2023

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int length, width, height, volume, weight;

    // Storing user input to compute dimensional weight later
    printf("Length: ");
    scanf("%d", &length);
    printf("Width: ");
    scanf("%d", &width);
    printf("Height: ");
    scanf("%d", &height);

    // computing dimensional weight
    volume = length * width * height;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimesional Weight (pounds): %d\n", weight);

    return 0;
}