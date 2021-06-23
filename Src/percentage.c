#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5, total, percentage;
    printf("enter subs\n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total * 100 / 500;
    printf("%d \n %d\n", percentage, total);
}