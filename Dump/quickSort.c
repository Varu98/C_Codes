#include <stdio.h>

//function for printing the output of the array
int printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

//Quick Sort Function and Logic
int quickSort(int *array, int n)
{
    //for the 1st phase of the interation and so on
}

//------------------------
//main function starts here
int main()
{
    int array[50], n;

    printf("Quick Sort\n");
    // scanArray(array, n);

    printf("range\n");
    scanf("%d", &n);

    printf("array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n");

    printArray(array, n);
    quickSort(array, n);
    printArray(array, n);

    return 0;
}