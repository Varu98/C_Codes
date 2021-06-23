#include <stdio.h>

void display(char str[])
{
    printf("The entered sting is : ");
    puts(str);
}

int main()
{
    char a[50];
    printf("Display String\n");
    printf("Enter a String : ");
    gets(a);
    display(a);

    return 0;
}