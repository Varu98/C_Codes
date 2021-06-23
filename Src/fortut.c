#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{ // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int i, j, product;
    printf("For Loop\n");

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            product = i * j;

            printf("%d X %d = %d\n", j, i, product);
        }
        printf("_______\n");
    }

    return 0;
}