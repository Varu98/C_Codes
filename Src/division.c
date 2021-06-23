#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter The numbers to be divided \n");
    scanf("%d%d", &a, &b);
    result = a / b;
    printf("%d divided by %d = %d\n", a, b, result);

    return 0;
}