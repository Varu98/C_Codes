#include <stdio.h>
// #include <conio.h> use this when using turbo
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[50], n;
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("Selection sort\n");

    printf("range ");
    scanf("%d", &n);

    printf("array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(&arr[j], &arr[i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n%d\n ", arr[i]);
    }

    //getch();
    return 0;
}