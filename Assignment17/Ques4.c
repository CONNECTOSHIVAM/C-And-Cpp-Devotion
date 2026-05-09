// Q4. write a recursive function calculate sum of square of first n natural numbers.
#include<stdio.h>
int sumOfNSquare(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sumOfNSquare(num);
    printf("Sum of first %d square: %d",num,result);
    return 0;
}
int sumOfNSquare(int a)
{
    if(a == 0)
    {
        return 0;
    }
    return (a*a)+sumOfNSquare(a-1);
}