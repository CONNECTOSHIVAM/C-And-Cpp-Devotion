// Q10. write a recursive function to print reverse of the given number.
#include<stdio.h>
void reverse_of_num(int v);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    reverse_of_num(num);
    return 0;
}
void reverse_of_num(int v)
{
    if(v==0)
    {
        return;
    }
    printf("%d",v%10);
    reverse_of_num(v/10);
}