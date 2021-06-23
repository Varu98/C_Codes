#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter a number for comparion\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d  is greater number\n", num1);
        }
        else
        {
            printf("%d  is greater number\n", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is greater", num2);
        }
        else
        {
            printf("%d is greater", num3);
        }
    }

    return 0;
}