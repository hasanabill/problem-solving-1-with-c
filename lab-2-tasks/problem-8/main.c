// Write a C program to determine whether a given number is Zero (0) or not.

#include <stdio.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num == 0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is not zero");
    }
}