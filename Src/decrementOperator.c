#include <stdio.h>

int main()
{
    int i = 0;
    printf("consider a variable whose value is %d\n", i);
    i--;
    printf("the decremented output for i++ should be %d\n", i);
    --i;
    printf("the decrement operator --i should give imediate output %d\n", i);

    printf("consider a variable whose value is %d\n", i);
    i++;
    printf("the increment output for i++ should be %d\n", i);
    ++i;
    printf("the increment operator --i should give imediate output %d\n", i);
}