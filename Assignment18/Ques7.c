// Q7. write a program to find second largest in an array . take array values from the user.
#include<stdio.h>
int main()
{
    int num[6];
    printf("Enter the 6 value: \n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }
    int prevMax,a,b, max=num[0];
    for (int i = 1; i < 6; i++)
    {
        if(max<num[i])
        {
            prevMax = max;
            max = num[i];
        }
        else if(num[i]>prevMax && num[i] != max)
        {
            prevMax = num[i];
        }
    }

    printf("gratest value in this array: %d \n",max);
    printf("2nd gratest value in this array: %d",prevMax);

    return 0;
    
}