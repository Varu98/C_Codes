#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int arr[50], i, n, key, low, high, mid;
    printf("binary search");
    printf("enter integer range of an array");
    scanf("%d", &n);
    printf("enter %d elements for the  array ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element you wish to find for the  array ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {
        if (arr[mid] < key)

            low = mid + 1;
        else if (arr[mid] == key)
        {
            printf("the element %d is present at the placevalue of %d ", key, mid + 1);
            break;
        }
        else

            high = mid - 1;
        mid = (low + high) / 2;
    }

    if (low > high)
    {
        printf("number not present in the array");
    }

    //getch();
    return 0;
}