/*
1: Your father know that you are good at programming, now he is asked you to write a
C program that can take input the age of your father, mother and uncle and your program should
output who is the oldest, who is youngest and whose age is between oldest and youngest.
*/

#include <stdio.h>

int main()
{
    int fAge, mAge, uAge;
    printf("Enter your fathers age: ");
    scanf("%d", &fAge);
    printf("Enter your mother's age: ");
    scanf("%d", &mAge);
    printf("Enter your uncle's age: ");
    scanf("%d", &uAge);

    if (fAge > mAge && fAge > uAge)
    {
        if (mAge > uAge)
        {
            printf("\nYour father is the oldest person");
            printf("\nYour uncle is the youngest person");
            printf("\nYour mother's age is between oldest and youngest age.");
        }
        else
        {
            printf("\nYour father is the oldest person");
            printf("\nYour mother is the youngest person");
            printf("\nYour uncle's age is between oldest and youngest age.");
        }
    }
    if (mAge > fAge && mAge > uAge)
    {
        if (fAge > uAge)
        {
            printf("\nYour mother is the oldest person");
            printf("\nYour uncle is the youngest person");
            printf("\nYour father's age is between oldest and youngest age.");
        }
        else
        {
            printf("\nYour mother is the oldest person");
            printf("\nYour father is the youngest person");
            printf("\nYour uncle's age is between oldest and youngest age.");
        }
    }
    if (uAge > fAge && uAge > mAge)
    {
        if (fAge > mAge)
        {
            printf("\nYour uncle is the oldest person");
            printf("\nYour mother is the youngest person");
            printf("\nYour father's age is between oldest and youngest age.");
        }
        else
        {
            printf("\nYour uncle is the oldest person");
            printf("\nYour father is the youngest person");
            printf("\nYour uncle's age is between oldest and youngest age.");
        }
    }

    // printf("%d mom %d uncle %d ", fAge, mAge, uAge);

    return 0;
}
