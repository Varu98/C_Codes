#include <stdio.h>
// #include <conio.h> use this when using turbo

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("in func %d %d\n", *a, *b);
}

int main()
{ // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int x, y;
    x = 100;
    y = 200;

    printf("before swap %d\n", x);
    printf("before swap %d\n", y);

    swap(&x, &y);

    printf("after swap %d\n", x);
    printf("after swap %d\n", y);
    //getch();
    return 0;
}