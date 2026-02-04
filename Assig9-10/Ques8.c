// Q. write a program to check wheather entered number is prime number or not.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("Enter number %d is not Prime number. ",n);
    }
   

    bool isPrime = true;
    for(int i = 2;i<=sqrt(n);i++)
    {      
        if(n%i==0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime==true)
    {
        printf("%d is the prime number",n);
    }else{
        printf("%d is not prime number",n);
    }

    return 0;
}