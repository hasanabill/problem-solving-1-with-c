/*
Read two numbers N1 and N2. Write a program to calculate the factorial of these numbers and
finally sum the factorials of these numbers as output. (Just use for loop to do this)
*/

#include <stdio.h>

int main()
{
    int i, num1, num2, fac1 = 1, fac2 = 1;

    printf("Enter the 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1; i++)
    {
        fac1 = fac1 * i;
    }
    for (i = 1; i <= num2; i++)
    {
        fac2 = fac2 * i;
    }
    printf("The sum of the factorial of both number is: %d", fac1 + fac2);

    return 0;
}
