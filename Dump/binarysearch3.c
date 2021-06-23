#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    int n, arr[50], l, h, m, search;
    printf("linear search\n");

    printf("enter the range of array\n");
    scanf("%d", &n);

    printf("enter the elements to feed in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    printf("enter the element to search\n");
    scanf("%d", &search);

    //logic

    l = 0;
    h = n - 1;
    m = (l + h) / 2;

    while (l <= h)
    {
        if (arr[m] == search)
        {
            printf("element %d found at %d ", search, m + 1);
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
    // getch();
    return 0;
}