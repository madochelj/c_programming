/* Author: mlj
 * Date:
 * Purpose:
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
        int size;
        int size_int;
        int size_float;
        int size_long;
        int size_double;
        int size_long_long;

        size = sizeof(int32_t);
        size_int = sizeof(int);
        size_float = sizeof(float);
        size_long = sizeof(long);
        size_double = sizeof(double);
        size_long_long = sizeof(long long);

        printf("%d\n", size);
        printf("%d\n", size_int);
        printf("%d\n", size_float);
        printf("%d\n", size_long);
        printf("%d\n", size_double);
        printf("%d\n", size_long_long);
        return 0;
}

