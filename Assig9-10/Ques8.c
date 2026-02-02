// Q. write a program to check wheather entered number is prime number or not.

#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("Enter number %d is not Prime number. ",n);
    }
   

    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("%d is not Prime numbers.",n);
            break;
        }
        else{
            printf("%d is Prime numbers.",n);
            break;
        }
    }

    return 0;
}