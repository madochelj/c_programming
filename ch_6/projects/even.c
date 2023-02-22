// author: mlj
// purpose: prints evens numbers between the ranges of 1 and n (n is user input)
// date: 02/21/23

#include <stdio.h>

int main(void) {
    int user_input;
    int squares;

    printf("Enter a number: ");
    scanf("%d", &user_input);

    for (int i = 0; i < user_input; i++) {
        squares = i * i;
        if (squares % 2 == 0 && squares <= user_input) {
            printf("%d\n", squares);
        }
    }
    return 0;
}