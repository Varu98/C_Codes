#include <stdio.h>
// #include <conio.h> use this when using turbo

int sub(int a, int b)
{
    int result;
    result = a - b;
}

int main()
{ // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen
    int res;

    res = sub(6, 4);

    printf("%d\n", res);
    //getch();
    return 0;
}