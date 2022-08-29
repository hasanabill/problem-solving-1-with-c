/*
If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d, sum;

    printf("Enter a four digit number: ");
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);

    sum = a + d;

    printf("The sum of first and last digit on that number is %d", sum);

    return 0;
}