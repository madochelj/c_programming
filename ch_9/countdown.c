/* Author: mlj
 * Date: 5/4/2023
 * Purpose: print a countdown using a fuction to output
 */

#include <stdio.h>

void print_count(int n)
{
        printf("T minnus %d and counting\n", n);
}
int main(void)
{
        int i;

        for (i = 10; i > 0; i--) {
                print_count(i);
        }
        return 0;
}

