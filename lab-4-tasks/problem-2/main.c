/*
We know there are four quadrants named 1st, 2nd, 3rd and 4th quadrant. Your task is to write a c program that can take input of the values of  X and Y Coordinates. and give us output of which quadrants will the results be

*/

#include <stdio.h>
int main()
{
    float x, y;

    printf("Please enter the value of X coordinate point: ");
    scanf("%f", &x);
    printf("Please enter the value of Y coordinate point: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 1st Quadrant\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 2nd Quadrant\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 3rd Quadrant", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 4th Quadrant\n", x, y);
    }
    else
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in the center\n", x, y);
    }

    return 0;
}
