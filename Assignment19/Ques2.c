// Q2. write a function to find the smallest number from the given array of any size(TSRS).
#include <stdio.h>
int smallestNum(int arr[], int size);
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter the array value: \n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = smallestNum(arr, s);
    printf("smallest number in this array: %d", smallest);

    return 0;
}
int smallestNum(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    return smallest;
}