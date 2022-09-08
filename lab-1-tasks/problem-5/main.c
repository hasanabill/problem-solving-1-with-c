/*
The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.
*/

#include <stdio.h>

int main()
{
    float pi = 3.1416;

    float rectLength, rectBreadth, circleRadius, rectArea, rectParameter, circleArea, circleCircumference;

    printf("Enter the length of rectangle: ");
    scanf("%f", &rectLength);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &rectBreadth);
    printf("Enter the radius of a circle: ");
    scanf("%f", &circleRadius);

    rectArea = rectLength * rectBreadth;
    rectParameter = 2 * (rectLength + rectBreadth);

    circleArea = pi * circleRadius * circleRadius;
    circleCircumference = 2 * pi * circleRadius;

    printf("The area of rectangle is %.2f \n", rectArea);
    printf("The parameter of rectangle is %.2f \n", rectParameter);
    printf("The area of circle is %.2f \n", circleArea);
    printf("The circumference of circle is %.2f \n", circleCircumference);

    return 0;
}