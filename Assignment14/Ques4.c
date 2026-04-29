// Q. Write a function to print n natural numbers.

#include<stdio.h>
void printN();
int main()
{
    printN();
    return 0;
}
void printN()
{
    int n;
    printf("Enter how many number to print: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",i);
    }
    
}