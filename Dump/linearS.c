#include <stdio.h>
int main()
{
    printf("\n\tlinear search");
    int train[100] = {1, 2, 3, 4, 5};

    int search;

    search = 5;

    for (int i = 0; i < 5; i++)
    {
        if (train[i] == search)
        {
            printf("\n\t%d is present at %d \n", search, i);
        }
    }

    return 0;
}
