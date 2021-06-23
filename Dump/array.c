#include <stdio.h>

int main()
{
    char chor;

    printf("\nchor ko pakde divyansh\n");

    char train[10][1000] = {"varu", "harsh", "kashimiri", "nobita", "pug", "ghileri"};

    printf("whom do you want to declare chor\n");
    scanf("%s", &chor);

    for (int i = 0; i <= 6; i++)
    {

        if (train[i] == chor)
        {
            printf(" %s milla meko %s vaali seat pe\n", chor, train[i]);
            break;
        }
        if (i == chor)
        {
            printf("chor is not present");
        }
    }

    return 0;
}
