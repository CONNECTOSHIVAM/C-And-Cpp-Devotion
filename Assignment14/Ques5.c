// Q5.write a function to print first N odd natural numbers.
#include<stdio.h>
void printOdd();
int main()
{
    printOdd();
    return 0;
}
void printOdd()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
       printf("%d ",i*2-1);
    }
}