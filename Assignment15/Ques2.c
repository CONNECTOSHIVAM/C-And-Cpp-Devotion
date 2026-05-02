// Q2. write a function to calculate the HCF of two numbers.

#include<stdio.h>
int hcf();
int main()
{
    int a,b;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b);
    int result = hcf(a,b);
    printf("HCF is: %d",result);
    return 0;
}
int hcf(int x,int y)
{
   int L = x>y?x:y;
   for(int i=L;i<=y;i--)
   {
    if(x%i==0 && y%i==0)
    {
        return i;
    }
   }
}