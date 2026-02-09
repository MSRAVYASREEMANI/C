/* Program for demonstrating use of Symbolic Constants */
#include <stdio.h>

#define CP 50   /* Symbolic Constant for Cost Price */

int main()
{
    int SP = 70;
    int profit = SP - CP;

    printf("Profit = %d", profit);

    return 0;
}
