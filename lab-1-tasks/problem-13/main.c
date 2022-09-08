/*
If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example, if the number that is input is 12391 then the output should be displayed as 23502.
*/

#include <stdio.h>

int main()
{
    int num, newNum;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    newNum = num + 11111;

    printf("The number after increasing each of its digit by 1 is %d", newNum);

    return 0;
}