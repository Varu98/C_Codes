// #include <stdio.h>

// int main()
// {
//     int a, sum;

//     printf("Enter the No you want the multiplication table of\n");
//     scanf("%d", &a);

//     for (int i = 0;
//          i <= 10; i++)
//     {
//         sum = a * i;
//         printf("%d X %d = %d\n", a, i, sum);
//     }

//     return 0;
// }

// #include <stdio.h>
// // #include <conio.h>

// int main()
// {
//     // clrscr();
//     int i, j, product;
//     for (i = 1; i <= 10; i++)
//     {
//         for (j = 1; j <= 10; j++)
//         {
//             product = i * j;
//             printf("%d * %d = %d\n", i, j, product);
//         }

//         printf("***************\n"); //this is to beautify or segregate the code
//     }
//     return 0;
// }

#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{ // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int i, j, product;
    printf("Enter the number\n");
    scanf("%d", &j);

    for (i = 1; i <= 10; i++)
    {
        product = i * j;
        printf("%d * %d = %d\n", i, j, product);
    }

    //getch();
    return 0;
}