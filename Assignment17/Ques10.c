// Q10.write a program in c to calculate the power of any number using recursion.
#include<stdio.h>
int power(int a, int b);
int main()
{
    int num,pow;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power term: ");
    scanf("%d",&pow);


    int result = power(num,pow);
    printf("%d^%d value is: %d",num,pow,result);
    return 0;
}
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a * power(a,b-1);

}