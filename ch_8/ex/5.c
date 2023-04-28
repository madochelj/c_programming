/* Author: mlj
 * Date:04/18/2023
 * Purpose: Average temperture per day array
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define DAYS_IN_A_MONTH 30
#define HOURS_IN_A_DAY 24

int main(void)
{
        float temp_data[DAYS_IN_A_MONTH][HOURS_IN_A_DAY] = {false};
        int i, x;
        float temp;

        srand((unsigned) time(NULL));

        for (i = 0; i < DAYS_IN_A_MONTH; i++) {
                for (x = 0; x < HOURS_IN_A_DAY; x++) {
                        if (!temp_data[i][x]) {
                                temp_data[i][x] = (unsigned)rand() % 1000;
                                printf("%d\t", temp_data[i][x]);
                        }
                }
                printf("\n");
        }

        return 0;
}

