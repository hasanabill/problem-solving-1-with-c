/*
Take 10 integers from keyboard using loop and print their average value on the screen.
*/

#include <stdio.h>
int main()
{

    float avg, sum;

    printf("Please enter 10 numbers: ");

    for (int i = 1; i <= 10; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / 10;

    printf("Average of 10 numbers is : %.2f", avg);

    return 0;
}
