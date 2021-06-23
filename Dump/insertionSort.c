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

//Insertion Sort Function and Logic
int insertionSort(int *array, int n)
{
    //for the 1st phase of the interation and so on
    for (int i = 1; i < n; i++)
    {
        int current = array[i];
        int j = i - 1;

        //running the sub phase of the first iteration and so on
        //the larger element will be compared and inserted

        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];

            j--;
        }

        array[j + 1] = current;
    }
}

//------------------------
//main function starts here
int main()
{
    int array[50], n;

    printf("Insertion Sort\n");
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
    insertionSort(array, n);
    printArray(array, n);

    return 0;
}