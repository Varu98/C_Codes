#include <stdio.h>
int main()
{
    printf("\npointers\n");

    int a = 5;
    int *p = &a;
    *p = 6;

    int **q = &p;

    int ***r = &q;

    printf("%u\n", *p);
    printf("%u\n", *q);
    printf("%u\n", **q);
    printf("%u\n", **r);
    printf("%u\n", ***r);
    ***r = 10;
    printf("%d\n", a);

    return 0;
}
