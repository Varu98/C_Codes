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
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int arr[10], n;

    //heading

    printf("\n\tSelection Sorting In An Array ");

    //user declaring range of an array and feeding elements in it according to the range

    printf("\n\tEnter an array range ");
    scanf("\n\t%d", &n);

    printf("\n\tEnter The Values To Be Fed In The Array ");
    for (int i = 0; i < n; i++)
    {
        scanf("\n\t%d", &arr[i]);
    }

    //Logic

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] < arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    //printing the result

    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d", arr[i]);
    }

    //getch();
    return 0;
}