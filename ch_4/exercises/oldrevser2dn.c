// Author: mlj
// Pupose: Read two digit integer from terminal and reverse
// Date: 01/23/2023

#include <stdio.h>

int main(void)
{
    int digit1, digit2;

    // Read input from terminal 1 digit at a time and stores these two ditgit in seperate variables
    printf("Enter a two digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    // Print the two integer reverse to terminal
    printf("Two digit number revsered: %d%d\n", digit2, digit1);

    return 0;
}