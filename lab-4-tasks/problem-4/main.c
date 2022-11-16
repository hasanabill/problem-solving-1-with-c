/*
Think about a simple calculator. You need to take two number as user input and then
provide various options to the user like sum, subtract, multiply, divide. Now let user
chose what to do. Based on the user’s choice do the calculation and display result.
*/

#include <stdio.h>
int main()
{

    int choice;
    float num1, num2, sum, sub, multi, div;

    printf("1.Calculate the summation\n");
    printf("2.Calculate the subtraction\n");
    printf("3.Calculate the multiplication\n");
    printf("4. Calculate the division\n");

    printf("Make your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the numbers= ");
        scanf("%f%f", &num1, &num2);
        sum = num1 + num2;
        printf("The sum is %.2f", sum);
    }
    else if (choice == 2)
    {
        printf("Enter the numbers= ");
        scanf("%f%f", &num1, &num2);
        sub = num1 - num2;
        printf("The subtraction is %.2f", sub);
    }
    else if (choice == 3)
    {
        printf("Enter the numbers= ");
        scanf("%f%f", &num1, &num2);
        multi = num1 * num2;
        printf("The multiplication is %.2f", multi);
    }
    else if (choice == 4)
    {
        printf("Enter the numbers= ");
        scanf("%f%f", &num1, &num2);
        div = num1 / num2;
        printf("The division is %.2f", div);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
