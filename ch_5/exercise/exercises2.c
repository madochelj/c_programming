// Author: mlj
// Purpose: Exercises
// Date: 01/30/2023

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n = 2;

    if (n > 1 && n < 10)
        printf("n is between 1 and 10\n");

    if (n == 1-10)
        printf("n is between 1 and 10\n");

    int i = -17;
    
    printf("%d\n", i >= 0 ? i : -i);

    int age = 15;
    bool teenager;

    if (age >= 13 && age <= 19)
    {
        teenager = true;
    }
    else
    {
        teenager = false;
    }

    return 0;
}