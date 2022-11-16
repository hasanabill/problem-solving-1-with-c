// Write a program to find the factorial value of any number entered through the keyboard.

#include <stdio.h>
int main()
{

    int number, i, n = 1;
    printf("Enter the number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        n = n * i;
    }
    printf("The factorial value is %d", n);

    return 0;
}
