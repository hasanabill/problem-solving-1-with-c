/*
Niloys basic salary is input through the keyboard. His dearness allowance is 40% of his basic
salary and house rent is 20% of his basic salary. Write a program to calculate his gross salary.
*/

#include <stdio.h>

int main()
{

    float basicSalary;
    float dAllowance;
    float houseRent;
    float grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    dAllowance = .4 * basicSalary;
    houseRent = .2 * basicSalary;

    grossSalary = basicSalary + dAllowance + houseRent;

    printf("The gross salary of Niloy is %.2f", grossSalary);
    return 0;
}