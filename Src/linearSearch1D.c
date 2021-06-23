#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("\n\tProgram for Linear Search and Traversing through an Array\n\n");
    printf("\t========================================================\n\n");

    int arr[5] = {11, 22, 33, 44, 55}, search, i;
    printf("\tEnter any multiple of 11 till range 5 : ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            printf("\n\tElement : %d found at range : %d\n\n", search, i + 1);
        }
    }

    //getch();
    return 0;
}