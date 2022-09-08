/*
Imagine you want to go to the shopping complex from your home and there are two alternative
routes to go there. One route is A and another one is B. In A route distance from your home to
the shopping complex is 15.6 kilometers and in B route the distance is 18 kilometers. Now
considering this situation write a C program to determine the shortest route to your destination.
*/

#include <stdio.h>

int main()
{
    float A = 15.6;
    int B = 18;

    if (A < B)
    {
        printf("The shortest route is A");
    }
    else
    {
        printf("The shortest route is B");
    }
}