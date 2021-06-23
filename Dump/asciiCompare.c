#include <stdio.h>
#include <string.h>
int main()
{
    printf("Ascii Compare\n");
    char str[20], str1[20];
    int b;

    gets(str);
    gets(str1);

    b = strcmp(str, str1);

    printf("%d\n", b);

    return 0;
}