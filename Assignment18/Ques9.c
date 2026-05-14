// Q. sort the array in decending order.
#include <stdio.h>
int main()
{
    int num[10];
    printf("Enter the 10 number: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
        {
            if(num[j]<num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("sorted array is(decending tone): ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }


    
    return 0;
}