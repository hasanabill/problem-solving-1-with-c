

#include <stdio.h>

int main()
{
    int i, rows = 5, s;

    for (i = 1; i <= rows; i++)
    {
        for (s = 1; s <= i; s++)
        {
            if (s % 2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
