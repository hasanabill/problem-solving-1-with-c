/*
Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.
*/

#include <stdio.h>
int main()
{

    int i;

    for (i = 0; i <= 255; i++)
    {
        printf(" The ascii value of %d is %c\n", i, i);
    }
    return 0;
}
