// Q6.write a recursive function to calculate the factorail of the given number.
#include<stdio.h>
int factorial(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int result = factorial(num);
    printf("Factorial of %d : %d",num,result);
    return 0;
}
int factorial(int a){

    if(a==0)
    {
        return 1;
    }
    return a * factorial(a-1);
}