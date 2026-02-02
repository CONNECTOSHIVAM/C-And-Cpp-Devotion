// Q. write a program to check wheather entered number is prime number or not.

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("Enter number %d is not Prime number. ",n);
    }
    else if (n<=3)
    {
        printf("%d is  Prime numbers.",n);
    }

    for(int i = 2;i<=n/2;i++)
    {
        if(n%2==0)
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