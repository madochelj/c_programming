// Author: Madoche Louis Jeune
// Purpose: Compute the volume of a 10-meter sphere
// Date: 01/06/2023 

#include <stdio.h>
#include <math.h>
#define PI 3.14f
#define FRAC 4.0f / 3.0f
#define RADIUS 10

int main(void)
{
    float volume;
    volume = pow(RADIUS, 3) * PI * FRAC;
    printf("%f\n", volume);
    return 0;
}