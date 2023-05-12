// author: mlj
// purpose: find the greatest common factor
// date: 2/20/23

#include <stdio.h>

int gcd(int input_1, int input_2);

int main(void)
{
        int x, y, _gcd_;
        printf("Input two numbers: ");

        _gcd_ = gcd(x, y);

        printf("%d\n", _gcd_);
}

int gcd(int input_1, int input_2) {

    int temp_bin;

    // get two inputs from user
    scanf("%d %d", &input_1, &input_2);
    
    // using the Euclidean Algorithm to find the greatest common factor
    // loops break on find the solution
    for (;;) {
        // a, b, c, a / b = c, b / c = (c)
        temp_bin = input_1 % input_2;
        input_1 = input_2;
        input_2 = temp_bin;

        if (input_2 == 0)
            break;
    }

    return input_1;
}
