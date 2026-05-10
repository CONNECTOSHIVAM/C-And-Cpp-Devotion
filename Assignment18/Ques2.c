// Q2. write a program to calculate the average of numbers stored in array of size 10.


#include <stdio.h>
int main()
{
    int num[10],sum = 0;
    printf("Enter the 10 value: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    float average = sum / 10.0;
    printf("Average is : %.2f", average);
    return 0;
}