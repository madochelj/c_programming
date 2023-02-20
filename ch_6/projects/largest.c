// author: mlj
// purpose: find the largest numbers in a seris of inputs
// date: 02/19/23

#include <stdio.h>

int main(void)
{
    // float user input
    float user_in, largest_num;
    largest_num = 0;

    // gets user input and compare to largest_sum. Replace if input is larger. Terminates if zero is inputed.
    while(user_in)
    {
        printf("Enter a number: ");
        scanf("%f", &user_in);

        if (user_in > largest_num)
            largest_num = user_in;
    }

    printf("The largest number entered was %.2f\n", largest_num);
    return 0;
}