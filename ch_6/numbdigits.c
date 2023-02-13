// author: mlj
// purpose: calculates the number of digits in a integer
// date: 02/13/23

#include <stdio.h>

int main(void)
{
    int i;
    int num;
    num = 0; 

    printf("Enter a nonnegative integer: ");
    scanf("%d", &i);

    do
    {
        i /= 10;
        num++;
    } while (i > 0);

    printf("The number has %d number of digits\n", num);
    return 0;
}
