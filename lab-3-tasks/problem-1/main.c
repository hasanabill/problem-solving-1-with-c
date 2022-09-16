/*
Write a C program that can take input a number and then decide whether the number is
positive, negative or neutral.
*/

#include <stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("The number %.2f is positive", num);
    }
    else if (num < 0)
    {
        printf("The number %.2f is negative", num);
    }
    else
    {
        printf("The number %.2f is neutral", num);
    }

    return 0;
}