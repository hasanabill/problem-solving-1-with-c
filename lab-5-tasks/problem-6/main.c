#include <stdio.h>
int main()
{

    int i, row, s;
    printf("Please enter the number of rows: ");
    scanf("%d", &row);
    printf("\n");

    for (i = 1; i <= row; ++i)
    {
        for (s = 1; s <= i; ++s)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
