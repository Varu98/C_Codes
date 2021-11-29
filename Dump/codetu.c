#include <stdio.h>
int main()
{
    char str1[] = "JOHN";
    char str2[20];
    str2 = str1;
    printf("%s", str2);
    return 0;
}