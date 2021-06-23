#include <stdio.h>
int main()
{
    printf("pointer increment\n");

    int a = 2;
    int *p;

    *p = &a;

    printf("%d\n", *--p);
    printf("%d\n", --*p);
    printf("%d\n", *p);
    printf("%d\n", ++*p);
    printf("%d\n", *++p);

    return 0;
}