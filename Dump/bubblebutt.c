#include <stdio.h>

int swapp(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[50], n, counter;
    printf("bubble sort\n");

    printf("enter range\n");
    scanf("%d", &n);

    printf("array\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swapp(&arr[i], &arr[i] + 1);
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n\n%d\n", arr[i]);
    }
    return 0;
}