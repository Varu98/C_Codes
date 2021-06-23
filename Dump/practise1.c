#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    //no of elements = n
    int n;

    printf("enter the number of elements present in an array\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter the number of elements to feed in the array\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    //getch();
    return 0;
}

// int arr[10] = {0 9 8 7 1 3 3 1 7 2};