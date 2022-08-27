/*
The distance between Mirpur and Ashulia is input through the keyboard. Write a program to
convert and print this distance in meter, feet, inches and centimeters.
*/

#include <stdio.h>

int main()
{
    float distanceInKm;
    float distanceInMeter;
    float distanceInFeet;
    float distanceInInch;
    float distanceInCentimeters;

    printf("Enter the distance: ");
    scanf("%f", &distanceInKm);

    printf("this distance is %.2f", distanceInKm);

    return 0;
}