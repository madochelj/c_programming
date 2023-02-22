// author: mlj
// purpose: reverse digits no matter the integer length
// date: 02/21/23

#include <stdio.h>

int main(void) {

    int user_input;

    printf("Enter a integer: ");
    scanf("%d", &user_input);

    do {
        printf("%d", user_input % 10);
        user_input /= 10;
    } while (user_input);

    printf("\n");
    return 0;
}