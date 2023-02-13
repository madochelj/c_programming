// author: mlj
// purpose: example of the while statment
// date: 02/13/23

#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    sum = 0;

    printf("This proram sums a seris of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
