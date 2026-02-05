// Q. write a program to print all prime between two numbers.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){

    int a;
    printf("Enter the print two Numbers: ");
    scanf("%d",&a);

    printf("Next Prime Numbers after %d: ",a);
    for(int i = a+1; i<=a+1463;i++)
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
        break;
       }
    }

    return 0;
}