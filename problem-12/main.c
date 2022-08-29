/*
If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item.
*/

#include <stdio.h>

int main()
{
    float totalSellingPrice, totalProfit, totalCost, costPerItem;

    printf("Enter total selling price: ");
    scanf("%f", &totalSellingPrice);

    printf("Enter total profit amount: ");
    scanf("%f", &totalProfit);

    totalCost = totalSellingPrice - totalProfit;

    costPerItem = totalCost / 15;

    printf("The cost of per item is %.2f", costPerItem);

    return 0;
}