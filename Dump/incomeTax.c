#include <stdio.h>

int main()
{
    float sal, newSal;
    printf("Income Tax\n");
    printf("Enter Annual Salary\n");
    scanf("%f", &sal);
    float itax;
    if (sal <= 250000)
    {
        printf("No income tax below 2.5L\n");
    }
    else if (sal >= 1000000)
    {
        itax = 0.30;
        newSal = sal * (itax);
        printf("sal is %f income tax will be %f tax is %f\n", sal, newSal, itax);
    }
    else if (sal >= 500000)
    {
        itax = 0.20;
        newSal = sal * (itax);
        printf("sal is %f income tax will be %f tax is %f\n", sal, newSal, itax);
    }
    else if (sal >= 250000)
    {
        itax = 0.05;
        newSal = sal * (itax);
        printf("sal is %f income tax will be %f tax is %f\n", sal, newSal, itax);
    }

    return 0;
}