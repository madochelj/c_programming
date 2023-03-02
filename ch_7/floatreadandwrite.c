// author: mlj
// purpose: read and write floating-point numbers
// date: 02/26/23

#include <stdio.h>

int main(void) {

        double d;

        scanf("%lf", &d);

        long double ld;

        scanf("%Lf", &ld);
        printf("%Lf", &ld);
        return 0;
}
