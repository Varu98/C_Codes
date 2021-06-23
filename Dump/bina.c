#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("binary search");
    int arr[100], l, m, h, k, n;

    printf("range? ");
    scanf("%d", &n);

    printf("input array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("key? ");
    scanf("%d", &k);
    l = 0;
    m = (l + h) / 2;
    h = n - 1;

    while (l <= h)
    {
        if (arr[m] == k)
        {
            printf("%d found at %d", k, m + 1);
            break;
        }
        else if (arr[m] < k)
        {
            l = m + 1;
            m = (l + h) / 2;
        }
        else
            h = m - 1;
        m = (l + h) / 2;
    }
    if (l > h)
    {
        printf("number not present in the array");
    }
    //getch();
    return 0;
}
