// Q. write a program to print all prime between two numbers.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){

    int a,b;
    printf("Enter the print two Numbers: ");
    scanf("%d %d",&a,&b);

    printf("Prime Numbers %d to %d: ",a,b);
    for(int i = a; i<=b;i++)
    {
       bool isPrime = true;
       for(int j = 2;j<=sqrt(i);j++)
       {
           if(i%j==0)
           {
              isPrime = false;
              break;
           }
       }
       if(isPrime==true)
       {
        printf("%d ",i);
       }
    }

    return 0;
}