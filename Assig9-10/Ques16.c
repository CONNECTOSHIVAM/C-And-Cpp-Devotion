// Q. write a program to print all prime number under 100.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){

    printf("Prime Numbers till Hunderds: ");
    for(int i = 2; i<=100;i++)
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