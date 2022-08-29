/*
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    printf("Enter a five digit number: ");
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("The sum is %d\n", a + b + c + d + e);

    return 0;
}