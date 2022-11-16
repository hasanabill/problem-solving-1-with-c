
#include <stdio.h>
int main()
{

    int i, rows, s, j;
    printf("Please enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        j = i;

        for (s = 1; s <= i; s++, j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
