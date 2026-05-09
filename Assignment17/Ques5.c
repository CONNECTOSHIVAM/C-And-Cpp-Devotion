// Q5. write a recursive function to sum of digits of a given numbers.
#include<stdio.h>
int sumOfDigits(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sumOfDigits(num);
    printf("sum of %d digits: %d",num,result);
    return 0;
}
int sumOfDigits(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a%10+sumOfDigits(a/10);
}