/* Author: mlj
 * Date:
 * Purpose:
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define LENGTH  50
#define HEIGHT  50

void display(void);
char sandbox[LENGTH][HEIGHT];
int direction;
int x_positin, y_position;
char tile = 'A';
int direction;

int main(void)
{
        int xaxis, yaxis, pole;

        //populates the array with '.'
        for (yaxis = 0; yaxis < HEIGHT; yaxis++){
                for (xaxis = 0; xaxis < LENGTH; xaxis++)
                        sandbox[yaxis][xaxis] = '.';
        }

        srand((unsigned) time(NULL));

        x_positin = rand() % LENGTH;
        y_position = rand() % HEIGHT;
        sandbox[y_position][x_positin] = tile;

        while (tile < 'Z') {
                direction = ((rand() % 100) %  4);

                switch (direction) {
                        case 0:
                                y_position++;
                                tile++;
                                sandbox[y_position][x_positin] = tile;
                                break;
                        case 1: 
                                y_position--;
                                tile++;
                                sandbox[y_position][x_positin] = tile;
                                break;
                        case 2:
                               x_positin--;
                               tile++;
                               sandbox[y_position][x_positin] = tile;
                               break;
                        case 3:
                               x_positin++;
                               tile++;
                               sandbox[y_position][x_positin] = tile;
                               break;
                }
        }
        display();
        return 0;
}

void display(void)
{
        //displays the array
        int x, y;
        for (y = 0; y < HEIGHT; y++){
                for (x = 0; x < LENGTH; x++)
                        printf("%c ", sandbox[y][x]);
                printf("\n");
        }
}
