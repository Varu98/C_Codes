#include <stdio.h>
// #include <conio.h> use this when using turbo

int main()
{
    // use void main() {} in case of turbo
    // clrscr(); used in turbo this function clears screen

    //declaration of required variables
    int arr[50], l, h, mid, n, key;

    //Heading
    printf("\n\tBinary Search");

    printf("\n\tenter an integer range ");
    scanf("\n\t%d", &n);

    printf("\n\tenter elements of an array ");

    //traversing through an array
    for (int i = 0; i < n; i++)
    {
        scanf("\n\t%d", &arr[i]);
    }

    //asking key from the user,here key being the element that the user requires
    printf("\n\telement to be found ?");
    scanf("\n\t%d", &key);

    // //logic
    l = 0;
    h = n - 1;
    mid = (l + h) / 2;
    while (l <= h)
    {
        if (arr[mid] < key)

            l = mid + 1;

        else if (arr[mid] == key)
        {
            printf("\n\t%d element found at %d \n", key, mid + 1);
            break;
        }
        else

            h = mid - 1;
        mid = (l + h) / 2;
    }
    //making sure to return false as output if there is a user error
    if (l > h)
    {
        return -1;
    }
    //getch();
    return 0;
}