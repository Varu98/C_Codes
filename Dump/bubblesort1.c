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
    int arr[50], n, counter;
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("bubble\n");

    printf("range\n");
    scanf("%d", &n);

    printf("array ");
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
                swap(&arr[i], &arr[i] + 1);
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", arr[i]);
    }

    //getch();
    return 0;
}