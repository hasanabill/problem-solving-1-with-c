//

#include <stdio.h>

int main()
{

    int arifAge, joyAge;

    printf("Enter Arif's age: ");
    scanf("%f", &arifAge);
    printf("Enter Joy's age: ");
    scanf("%f", &joyAge);

    if (arifAge > joyAge)
    {
        printf("Joy is younger");
    }
    else
    {
        printf("Arif is younger");
    }

    return 0;
}