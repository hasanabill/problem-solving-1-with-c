/*
Write a program to check if the area of the triangle is greater than the perimeter of the triangle.
*/

#include <stdio.h>

int main()
{
    int leftLength, rightLength, baseLength, height, parimeter;
    float area;

    printf("Enter Left length of the triangle: ");
    scanf("%d", &leftLength);
    printf("Enter Right length of the triangle: ");
    scanf("%d", &rightLength);
    printf("Enter Base length of the triangle: ");
    scanf("%d", &baseLength);
    printf("Enter Height of the triangle: ");
    scanf("%d", &height);

    area = .5 * baseLength * height;
    parimeter = leftLength + rightLength + baseLength;

    if (area > parimeter)
    {
        printf("The area %.2f is greater than the parimeter %d", area, parimeter);
    }
    else
    {
        printf("The parimeter %d is greater than the area %.2f", parimeter, area);
    }
}