/* Author: mlj
 * Date:04/16/2023
 * Purpose:Reverse a array of numbers using a variable length array
 * 
 */

#include <stdio.h>

int main(void)
{
        int i, n;

        //create an array length dependent on the input of the user
        printf("How many numbers do you want to revese: ");
        scanf("%d", &n);

        //length depends on user
        int a[n];

        printf("Enter %d numbers: ", n);
        for (i = 0; i < n; i++) {
                scanf("%d", &a[i]);
        }

        printf("In reverse order: ");
        for (i = n -1; i >= 0; i--) {
                printf("%d", a[i]);
        }
        printf("\n");
        return 0;
}
