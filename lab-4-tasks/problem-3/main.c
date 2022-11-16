/*
Write a C program that can convert temperature from degree celcius to farenheit and
farenheit to celcius. 
For your convenience the formula is given below:
Celcius to farenheit = (C × 9/5) + 32 
Farenheit to cecius = (F − 32) × 5/9
*/

#include <stdio.h>
int main()
{

    int choice;
    float celsius, fahrenheit, temp1, temp2;

    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");

    printf("Please enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the temperature in celsius: ");
        scanf("%f", &temp1);
        celsius = (temp1 * 9 / 5) + 32;
        printf("%.2f celsius is %.2f fahrenheit", temp1, celsius);
    }
    else if (choice == 2)
    {
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &temp2);
        fahrenheit = (temp2 - 32) * 5 / 9;
        printf("%.2f fahrenheit is %.2f celsius", temp2, fahrenheit);
    }
    else
    {
        printf("Not acceptable");
    }
    return 0;
}
