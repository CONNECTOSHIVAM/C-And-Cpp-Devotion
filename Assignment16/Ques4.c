// Q4. write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
void print_revodd(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    print_revodd(num);
    return 0;
}
void print_revodd(int a)
{
    if(a == 0)
    {
        return;
    }
    printf("%d ",a*2-1);
    print_revodd(a-1);
}