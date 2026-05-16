// Q1. write a function to find the greatest number from the given array of any size(TSRS).
#include <stdio.h>
int greatestNum(int arr[], int size);
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

    int greatest = greatestNum(arr, s);
    printf("greatest number in this array: %d", greatest);

    return 0;
}
int greatestNum(int arr[], int size)
{
    int greatest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (greatest < arr[i])
        {
            greatest = arr[i];
        }
    }

    return greatest;
}