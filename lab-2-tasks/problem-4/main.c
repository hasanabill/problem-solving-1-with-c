//

#include <stdio.h>

int main()
{
    int angleA, angleB, angleC, sum;

    printf("Enter angle A: ");
    scanf("%d", &angleA);
    printf("Enter angle B: ");
    scanf("%d", &angleB);
    printf("Enter angle C: ");
    scanf("%d", &angleC);

    sum = angleA + angleB + angleC;

    if (sum == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
}