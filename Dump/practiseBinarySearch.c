#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int arr[100], low, high, mid, n, key, i;

    printf("Binary Search");
    printf("enter the number of integers");
    scanf("%d", &n);
    printf("enter the number of elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the stored element you wish to find");
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
            printf("%d found at %d placevalue", key, mid + 1);
            break;
        }
        else

            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)

        printf("the number %d you entered is not present in the arry", key);

    //getch();
    return 0;
}