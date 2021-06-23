#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    int arr[5] = {11, 22, 33, 44, 55}, search;
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("\nLinear Search\n ");

    printf("enter a search value till 5 ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            printf("%d found at %d ", search, i + 1);
        }
    }

    return 0;
}