/* Author: mlj
 * Date: 5/16/2023
 * Purpose: Implement a pop data structure
 */

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

/* External Variables */
char contents[STACK_SIZE];
int top = 0;

/* Fuction prototypes */
void push(int i);
void make_empty(void);
bool is_full(void);
bool is_empty(void);
void left(int i);
void check(int i);
char pop(void);

int main(void)
{
        while (true) {
                int temp;
                if (temp == '\n')
                        return 0;

                scanf("%d", &temp);

                if (temp == '{' || temp == '[')
                        left(temp);
                else
                        check(temp);
        }

        top > 0 ? printf("Nested\n") : printf("Not Nested\n");
}

void check(int i)
{
        pop();
}
void left (int i)
{
        push(i);
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

void push(int i)
{
        if (is_full())
                printf("Printf Stack_Overflow\n");
        else
                contents[top++] = i;
}

char pop(void)
{
        if (is_empty()){
                printf("Stack_Underflow\n");
        }
        else
                return contents[--top];
}
