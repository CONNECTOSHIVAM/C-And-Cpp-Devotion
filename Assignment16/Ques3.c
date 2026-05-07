// Q3. write a recursive function to print first N odd natural numbers.
#include<stdio.h>
void oddN(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    oddN(num);
    return 0;
}
void oddN(int a)
{
    if(a==0)
    {
        return;
    }
    oddN(a-1);
    printf("%d ",a*2-1);
}