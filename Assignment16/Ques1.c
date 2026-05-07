// Q1. write a recursive function to print first N natural numbers.
#include<stdio.h>
void recur(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    recur(num);
    return 0;
}
void recur(int a)
{
   if(a == 0)
   {
      return;
   }
   recur(a -1);
   printf("%d ",a);

}