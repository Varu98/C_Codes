#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter The Two Numbers You Wish To Calculate For Addition\n");
    scanf("%d%d", &a, &b);
    a += b;
    printf("For Addition %d\n", a);

    printf("Enter The Two Numbers You Wish To Calculate For Subtraction\n");
    scanf("%d%d", &a, &b);
    a -= b;
    printf("For Subtraction %d\n", a);

    printf("Enter The Two Numbers You Wish To Calculate For Multiplication\n");
    scanf("%d%d", &a, &b);
    a *= b;
    printf("For Multiplication %d\n", a);

    printf("Enter The Two Numbers You Wish To Calculate For Division\n");
    scanf("%d%d", &a, &b);
    a /= b;
    printf("For Division %d\n", a);
}