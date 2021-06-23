#include <stdio.h>
int main()
{
    int arr[] = {2, 9, 7, 8};
    int *ptr = &arr;
    printf("the address of 1st element is %d\n", &arr);
    printf("the address of 1st element is %d\n", &arr[0]);

    printf("the address of 2nd element is %d\n", &arr + 1);
    printf("the address of 2nd element is %d\n", arr + 1);
    printf("the address of 2nd element is %d\n", &arr[1]);
    return 0;
}