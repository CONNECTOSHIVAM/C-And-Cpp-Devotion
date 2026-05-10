// Q1. write a program calculate sum of numbers stored in array of size 10.
// take array values from the user.

#include <stdio.h>
int main()
{
    int num[10],sum = 0;
    printf("Enter the value to total sum: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("Sum is : %d", sum);
    return 0;
}