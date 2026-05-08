// Q1. write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sum(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sum(num);
    printf("Sum of N numbers: %d",result);
    return 0;
}
int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a + sum(a-1); 
}