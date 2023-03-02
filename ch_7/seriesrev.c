// author: mlj
// purpose: sums a series a numbers (using long variables)
// date 02/24/23

#include <stdio.h>

int main(void) {
        
        long t_bin;
        long sum;
        sum = 0;

        printf("This program sums a series of integers.\n");
        printf("Enter integers (0 to terminate):");
        scanf("%ld", &t_bin);

        while (t_bin) {
                sum += t_bin;
                scanf("%ld", &t_bin);
        }

        printf("The sum is: %ld\n", sum);
        return 0;
}
