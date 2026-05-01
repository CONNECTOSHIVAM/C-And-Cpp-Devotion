// Q10. write a function to print all prime factors of given number. For example, if the 
// number is 36then your result should be 2,2,3,3.
#include<stdio.h>
void primeFactor();
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Prime Factors of %d : ",num);
    primeFactor(num);
    return 0;
}

void primeFactor(int a)
{
   int i=2;
   while (a>1)
   {
     while (a%i==0)
     {
        printf("%d ",i);
        a/=i;
     }
     i++;
   } 
   
}