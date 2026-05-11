// Q6. write a program sort elements of an array size of 10. Take array values from the user.

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
            if(num[j]>num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("sorted array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }


    
    return 0;
}