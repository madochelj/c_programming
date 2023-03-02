// author: mlj
// purpose: writing and reading of c singed and unsigned integers data types
// date: 02/24/23

#include <stdio.h>

int main(void) {

        unsigned short num1 = 30000;
        unsigned int num2 = 60000;
        unsigned long num3 = 60000;
        unsigned long long num4 = 60000;
        
        /*
        printf("%hd\n", num1);
        printf("%d\n", num2);
        printf("%ld\n", num3);
        printf("%lld\n", num4);
        */

        printf("%o\n", num1);
        printf("%x\n", num2);
        printf("%x\n", num3);
        printf("%o\n", num4);
        return 0;
}
