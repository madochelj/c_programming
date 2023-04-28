/* Author: mlj
 * Date: 4/16/2023
 * Purpose: Using the sizeof operator
 */

#include <stdio.h>

int main(void)
{
        int a[0];

        //size of an array
        sizeof(a) / sizeof (a[0]);

        //to clear an array
        for (int i = 0; i < 0; i++) {
                a[i] = sizeof(a) / sizeof(a[0]);
        }
        return 0;
}

