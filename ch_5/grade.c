// Author: mlj
// Purpose: Demestrate the use casses of the switch statement
// Date: 01/29/2023

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    switch (grade)
    {
        case 4:     printf("Excellent\n");
                    break;
        case 3:     printf("Good\n");
                    break;
        case 2:     printf("Average\n");
                    break;
        case 1:     printf("Poor\n");
                    break;
        case 0:     printf("Failing\n");
                    break;
        default:    printf("Illegal Grade\n");
                    break;
    }
}