// Q3. write a program sort the array of any size.(TSRN)
#include <stdio.h>
void sortedMachine(int arr[], int size);
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

    sortedMachine(arr, s);
    

    return 0;
}

void sortedMachine(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("sorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}