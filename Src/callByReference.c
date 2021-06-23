#include <stdio.h>
// #include <conio.h> use this when using turbo
void change(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;

    return;
}

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    printf("practising call by reference\n");
    int a = 4, b = 3;

    // a = a + b;
    // b = a - b;

    printf("%d %d\n", a, b);

    change(&a, &b);

    printf("%d %d \n", a, b);

    //getch();
    return 0;
}