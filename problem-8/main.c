#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    printf("Enter a five digit number: ");
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("%d\n", a + b + c + d + e);

    return 0;
}