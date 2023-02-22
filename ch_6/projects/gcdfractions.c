// author: mlj
// purpose: reduce a fraction to it's lowest term
// date: 02/21/23

#include <stdio.h>

int gcd(int input_1, int input_2);

int main(void) {

    int num;
    int den;
    int gcf;

    printf("Enter a fraction: (n/n): ");
    scanf("%d/%d", &num, &den);
    
    // finds the greatest common factor
    gcf = gcd(num, den);

    // reduce the fraction to it's lowest term using the gcd
    num /= gcf;
    den /= gcf;

    printf("%d/%d\n", num, den);
return 0;
}

int gcd(int input_1, int input_2) {

    int temp_bin;
    // using the Euclidean Algorithm to find the greatest common factor
    // loops break on find the solution
    for (;;) {
        // a, b, c, a / b = c, b / c = (c)
        temp_bin = input_1 % input_2;
        input_1 = input_2;
        input_2 = temp_bin;

        if (input_2 == 0)
            return input_1;
    }
}