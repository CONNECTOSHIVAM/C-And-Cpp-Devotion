// copy one array value to another array take a input from the user.
#include<stdio.h>
int main()
{
    int arr1[5],arrCpy[5];

    printf("Enter the value: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arrCpy[i] = arr1[i];
    }

    printf("arrCpy value: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arrCpy[i]);
    }
    
    
    return 0;
}