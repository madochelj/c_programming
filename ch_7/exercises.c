/* Author: mlj
 * Date:03/5/23
 * Purpose: Examples
 */

#include <stdio.h>

int main(void)
{
        int constant;
        int constant_2;
        int constant_3;
        int constant_4;
        int i = 3;
        float constant_5;

        constant = 010E2;
        constant_2 = 32.1E+5;
        constant_3 = 0770;
        constant_4 = 100_000;
        constant_5 = 3.978e-2f;

        short unsigned int test;
        short float;
        long double e_test1;
        unsigned long e_test2;

        char c = 'c';

        i += c;
        c = 2 * c - 1;
        putchar(c);
        printf(c);

        int n_65 = 'A';
        int n_65_1 = 0b1000001;
        int n_65_2 = 0101;
        int n_65_3 = 0x41;

        
        return 0;
}

