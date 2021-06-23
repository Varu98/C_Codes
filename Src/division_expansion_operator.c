#include <stdio.h>

void main()
{

    int num1, num2;

    printf("Enter The Two Numbers You Wish To calculate\n");
    scanf("%d%d", &num1, &num2);

    num1 /= num2;
    printf("The Result is %d\n", num1);
}