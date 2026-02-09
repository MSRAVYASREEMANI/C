/* Program for demonstrating use of data types and their extensions */
#include <stdio.h>

int main()
{
    int num = 10000;
    int num1;
    long int num2;

    num1 = 10000 * 10;
    num2 = 10000L * 10;

    printf("num = %d", num);
    printf("\nnum1 = %d", num1);
    printf("\nnum2 = %ld", num2);

    return 0;
}
