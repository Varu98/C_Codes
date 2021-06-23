#include <stdio.h>
int main()
{
    int arr[50], search, l, m, h, n;

    printf("Binary Search\n");

    printf("enter range\n");
    scanf("%d", &n);

    printf("enter the elements to feed in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the number to search\n");
    scanf("%d", &search);

    l = 0;
    m = (l + h) / 2;
    h = n - 1;

    while (l <= h)
    {
        if (arr[m] == search)
        {
            printf("\n%d is found at %d\n", search, m + 1);
            break;
        }
        else if (arr[m] < search)
        {
            l = m + 1;
            m = (l + h) / 2;
        }
        else if (arr[m] > search)
        {
            h = m - 1;
            m = (l + h) / 2;
        }
    }

    if (l > h)
    {
        return -1;
    }

    return 0;
}