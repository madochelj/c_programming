// author: mlj
// purpose: find the greatest common factor
// date: 2/20/23

#include <stdio.h>

int main(void) {

    int input_1;
    int input_2;
    int temp_bin;

    // get two inputs from user
    printf("Enter two integers (# #): ");
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

    printf("%d\n", input_1);
}