// Q7. write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
void square_of_num(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    square_of_num(num);
    return 0;
}
void square_of_num(int a)
{
    if(a == 0)
    {
        return;
    }
    square_of_num(a-1);
    printf("%d ",a*a);
}