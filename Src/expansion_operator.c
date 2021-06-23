#include <stdio.h>

void main()
{

    int num1, num2;

    printf("Enter The Two Numbers You Wish To Calculate\n");
    scanf("%d%d", &num1, &num2);

    num1 *= num2;
    printf("the result is %d\n", num1);
}