/*
Write a C program that can take input a number and then decide whether the number is
positive, negative or neutral.
*/

#include <stdio.h>

int main()
{
    int choice;

    printf("1. Coke\n2. Biriany\n3. Kacchi\n4. Burger\n");

    printf("Enter the number which you want to order: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You have choose Coke");
    }
    else if (choice == 2)
    {
        printf("You have choosen Biriany");
    }
    else if (choice == 3)
    {
        printf("you have choosen Kacchi");
    }
    else if (choice == 4)
    {
        printf("you have choosen Burger");
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}