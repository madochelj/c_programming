/* Author: mlj
 * Date: 2/29/2023
 * Purpose: Read a 5x5 table and sum the row and colums
 */

#include <stdio.h>

#define TABLE 5

int main(void)
{
        int i, x;
        int chart[TABLE][TABLE];
        int row_total[TABLE];
        int colum_total[TABLE];
        int sum;
        
        for (i = 0; i < TABLE; i++) {
                printf("Enter row %d: ", i);
                for (x = 0; x < TABLE; x++) {
                        scanf("%d", &chart[i][x]);
                }
        }

        for (i = 0; i < TABLE; i++) {
                for (x = 0; x < TABLE; x++) {
                        row_total[i] += chart[i][x];
                        colum_total[i] += chart[x][i];
                }
        }

        for (i = 0; i < TABLE; i++) {
                printf(" %d", row_total[i]);
                printf(" %d", colum_total[i]);
        }
        return 0;
}

