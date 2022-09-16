/*
Write a C program to input basic salary of an employee and calculate its Gross salary
according to following:
 * Basic Salary <= 10000 : HRA = 20%, DA = 80%
 * Basic Salary <= 20000 : HRA = 25%, DA = 90%
 * Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>

int main()
{
    float basicSalary, DA, HRA, GS;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000)
    {
        HRA = .2 * basicSalary;
        DA = .8 * basicSalary;
        GS = basicSalary + HRA + DA;

        printf("The gross salary is %.2f", GS);
    }
    else if (basicSalary <= 20000)
    {
        HRA = .25 * basicSalary;
        DA = .9 * basicSalary;
        GS = basicSalary + HRA + DA;

        printf("The gross salary is %.2f", GS);
    }
    else if (basicSalary > 20000)
    {
        HRA = .3 * basicSalary;
        DA = .95 * basicSalary;
        GS = basicSalary + HRA + DA;

        printf("The gross salary is %.2f", GS);
    }

    return 0;
}