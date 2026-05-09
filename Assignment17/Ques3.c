// Q3. write a recursive function to calulate sum of first N even natural numbers.
#include<stdio.h>
int sumOfEvenN(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sumOfEvenN(num);
    printf("Sum of first first %d even number: %d ",num,result);
    return 0;
}
int sumOfEvenN(int a)
{
    if(a==0)
    {
        return 0;
    }
    return (a*2)+sumOfEvenN(a - 1);
}