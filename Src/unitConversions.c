// A program that will help in unit conversion
// This program will keep looping until the q key is not pressed
// program will be providing options to choose between the type of unit conversions

/* 
Conversions For
kms to miles
inches to foot
pounds to kgs
inches to metres

*/

#include <stdio.h>

int main()
{

    int choice;
    float num, result;
    char re;

    printf("\n\n\t Program for Different types of unit conversions\n\n");
    do
    {
        printf("\t Press 1 for Conversion in kms to miles\n\n\t Press 2 for Conversion in inches to foot\n\n\t Press 3 for Conversion in pounds to kgs\n\n\t Press 4 for Conversion in inches to metres\n");

        scanf("\n\t\t%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n\n\tConversion in kms to miles\n");
            printf("\n\n\tEnter the number in kms to convert into miles\n");
            scanf("\n\t\t%f", &num);
            result = num * 0.62;
            printf("\n\n\t%f in kms = %f in miles\n", num, result);

            break;
        case 2:
            printf("\n\n\tConversion in inches to foot\n");
            printf("\n\n\tEnter the number in inches to convert into foot\n");
            scanf("\n\t\t%f", &num);
            result = num / 12;

            printf("\n\n\t%f in inches = %f in foot\n", num, result);

            break;
        case 3:
            printf("\n\n\tConversion in pounds to kg\n");
            printf("\n\n\tEnter the number in pounds to convert into kg\n");
            scanf("\n\t\t%f", &num);
            result = num / 2.20;

            printf("\n\n\t%f in pounds = %f in kgs\n", num, result);

            break;
        case 4:
            printf("\n\n\tConversion in inches to metres\n");
            printf("\n\n\tEnter the number in inches to convert into metres\n");
            scanf("\n\t\t%f", &num);
            result = num * 0.02;

            printf("\n\n\t%f in inches = %f in metres\n", num, result);

            break;
        default:
            printf("\n\n\tIncorrect Option Entered The Program will exit now\n");
            break;
        }

        printf("\n\n\tIf you wish to exit press q to convert another unit press r\n");
        scanf("%s", &re);
    } while (re == 'r');

    return 0;
}