/* Author: mlj
 * Date: 5/4/2023
 * Purpose:define a function that averages the two numbers
 */

#include <stdio.h>

double average (double a, double b)
{
        return (a + b) / 2;
}
int main(void)
{
        double x, y, z;

        printf("Enter three numbers: ");
        scanf("%lf%lf%lf", &x, &y, &z);
        printf("Average of %g and %g: %g\n", x, y, average(x, y));
        return 0;
}

