#include <stdio.h>

int main()
{
    int celsius, farenheit;
    printf("Enter The Temperature in Farenheit You Wish To Convert in Celsius\n");
    scanf("%d", &farenheit);
    celsius = (farenheit - 32) * 5 / 9;
    printf("The Converted Temperature in Celsius is %d\n", celsius);
}