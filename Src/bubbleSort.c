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
    int arr[10], n, arrSize, temp;
    //heading
    printf("\n\tBubble Sorting ");

    //user declaring range of an array and feeding elements in it according to the range
    printf("\n\tEnter the Range of array max 10 ");
    scanf("\n\t%d", &n);

    printf("\n\tEnter the values to feed in array ");
    for (int i = 0; i < n; i++)
    {
        scanf("\n\t%d", &arr[i]);
    }
    //Logic
    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        counter++;
    }
    //printing the result
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d ", arr[i]);
    }
}