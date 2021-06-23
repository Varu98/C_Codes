#include <stdio.h>

int main()
{
    int celsius, farenheit;
    printf("Enter The Temperature in Celsius You Wish To Convert in Farenheit\n");
    scanf("%d", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("The Converted Temperature in Farenheit is %d\n", farenheit);
}