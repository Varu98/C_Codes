#include <stdio.h>
int add(int *a, int *b)
{
    int sum = *a + *b;
    printf("%d\n", sum);
}

int main()
{
    printf("pointer addition\n");
    int a, b;
    printf("enter two no. for pointer addition\n");
    scanf("%d", &a);
    scanf("%d", &b);
    add(&a, &b);
    return 0;
}