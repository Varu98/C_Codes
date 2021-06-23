#include <stdio.h>

int main()
{

    printf("2d array\n");

    int r, c;

    int arr[50][50];

    printf("row\n");

    scanf("%d", &r);

    printf("coloumn\n");
    scanf("%d", &c);
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value as displayed [%d] [%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        printf("\n\n");
        for (int j = 0; j < c; j++)
        {
            printf("\t%d\t", arr[i][j]);
        }
    }

    printf("\n\n");

    //getch();
    return 0;
}