

#include <stdio.h>

int main()
{
    int i, s;

    for (i = 5; i >= 1; i--)
    {

        for (s = i; s >= 1; s--)
        {
            printf("%d", s);
        }

        printf("\n");
    }

    return 0;
}