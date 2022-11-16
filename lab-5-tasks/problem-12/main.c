

#include <stdio.h>
int main()
{

    int i, s, rows;
    printf(" Please enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    for (i = rows; i > 0; i--)
    {
        for (s = i; s > 0; s--)
        {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}
