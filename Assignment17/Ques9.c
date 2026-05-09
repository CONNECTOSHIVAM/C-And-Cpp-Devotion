// Q9.write a program in c to count the digits of given number using recursion.

#include<stdio.h>
int count(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = count(num);
    printf("Length of %d is : %d",num,result);
    return 0;
}
int count(int a)
{
    if(a==0)
    {
        return 0;
    }
    return 1 +  count(a/10);
}