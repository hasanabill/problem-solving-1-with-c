

#include <stdio.h>
int main()
{

    int i, n, sum = 0;
    printf("Please enter the value of n: ");
    scanf("%d", &n);

    for (i = 9; i <= n; i += 4)
    {
        sum = sum + i;
    }
    printf("\n Sum of the series is: %d", sum);

    return 0;
}
