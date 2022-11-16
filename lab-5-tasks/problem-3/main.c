/*
Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of BDT.
120.00 per hour for every hour worked above 36 hours in a week. Assume that employees do not
work for fractional part of an hour
*/

#include <stdio.h>
int main()
{

    int overtime, workingHours, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the working hours of the employee %d: ", i);
        scanf("%d", &workingHours);
        overtime = workingHours - 36;
        if (workingHours > 36)
        {
            printf("The employee worked %d hours overtime\n", workingHours - 36);
            printf("His overtime payment is %d BDT\n", overtime * 120);
        }
        else
        {
            printf("The employee needs to work more  than 36 hours per week for overtime payment\n");
        }
    }

    return 0;
}
