#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("program to scan and print the user input values in an array\n");
    printf("------------------------------------------------------------\n");
    printf("Enter any numbers from 1 to 10\n");

    int number[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d : ", i);
        scanf("%d", &number[i]);
    }

    printf("the elements of the array are:-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", number[i]);
    }

    //getch();
    return 0;
}