//

#include <stdio.h>

int main()
{
    float itemCostPrice, itemSellingPrice, profit_loss;

    printf("Enter Cost price of the item: ");
    scanf("%f", &itemCostPrice);
    printf("Enter selling price of the item: ");
    scanf("%f", &itemSellingPrice);

    if (itemCostPrice < itemSellingPrice)
    {
        printf("The profit is %.2f", itemSellingPrice - itemCostPrice);
    }
    else
    {
        printf("The loss is he incured is %.2f", itemCostPrice - itemSellingPrice);
    }

    return 0;
}