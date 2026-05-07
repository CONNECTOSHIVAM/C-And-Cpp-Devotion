// Q2. write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void recur(int n);
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
    if(a==0)
    {
        return;
    }
    printf("%d ",a);
    recur(a-1);
}