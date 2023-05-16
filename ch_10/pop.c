/* Author: mlj
 * Date: 5/16/2023
 * Purpose: Implement a stack
 */

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int main(void)
{
        return 0;
}

void make_empty(void)
{
        top = 0;
}

bool is_empty(void)
{
        return top == 0;
}

bool is_full(void)
{
        return top == STACK_SIZE;
}

void push(char i)
{
                contents[top++] = i;
}

int pop(void)
{
                return contents[--top];
}
