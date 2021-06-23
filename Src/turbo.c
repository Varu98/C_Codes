#include <stdio.h>
// #include<conio.h>
#define pi 3.14

void main()
{

    //    clrscr();
    int choice;
    printf("enter a choice in number format\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;
    }

    //    getch();
}