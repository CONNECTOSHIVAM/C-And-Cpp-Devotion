// Q8. write a recursive function to print first N terms of fibonacci serise.
#include<stdio.h>
int fibonacci_serise(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Fibonacci serise of Firsr %d terms: ",num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ",fibonacci_serise(i));
    }
    
    return 0;
}
int fibonacci_serise(int a)
{
   if(a==0 || a==1)
   {
     return a;
   }
   return fibonacci_serise(a-1)+fibonacci_serise(a-2);
}