/*
A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the with-drawer.
*/

#include <stdio.h>

int main()
{
    int amount, note100, note50, note10;

    printf("Enter the amount to be withdrawn (in hundreds): ");
    scanf("%d", &amount);

    note100 = amount / 100;
    note50 = (amount % 100) / 50;
    note10 = (((amount % 100) % 50) / 10);

    printf("\nRequired notes of 100 taka is  %d", note100);

    printf("\nRequired notes of 50 taka is %d", note50);

    printf("\nRequired notes of 10 taka is  %d", note10);

    return 0;
}