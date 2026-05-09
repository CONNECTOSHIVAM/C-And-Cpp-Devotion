// Q2. write a function to calculate sum of first N odd natural numbers.
#include<stdio.h>
int sumOfOdd(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sumOfOdd(num);
    printf("Sum of odd first N number: %d",result);
    return 0;
}
int sumOfOdd(int a)
{
   if(a==0)
   {
    return 0;
   }
   int b = a*2-1;
   return b + sumOfOdd(a-1);
}