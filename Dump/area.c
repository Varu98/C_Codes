#include "stdio.h"

#define AREA(l, b) (l * b)
#define pi 3.14
int main()
{
    int l1 = 10, l2 = 15, area;
    area = AREA(l1, l2);

    printf("area is :%d\n", area);

    return 0;
}

