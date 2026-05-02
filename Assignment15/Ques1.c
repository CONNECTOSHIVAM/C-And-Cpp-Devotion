// Q1. write a functions to calculate the LCM of two numbers.
#include<stdio.h>
int lcm();
int main(){

    int a,b;
    printf("Enter the number 2 numbers: ");
    scanf("%d%d",&a,&b);


    int result = lcm(a,b);
    printf("LCM is: %d",result);
    return 0;
}
int lcm(int x,int y)
{
    int L = x>y?x:y;
    for(int i=L;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            return i;
        }
    }
}