// Q2. write a function to calculate simple interst.
#include<stdio.h>
void simpleInterst();
int main()
{
    simpleInterst();
    return 0;
}
void simpleInterst()
{
    int principal,rate,time;
    printf("Enter the Principal Amount: ");
    scanf("%d",&principal);
    printf("Enter the interst rate:");
    scanf("%d",&rate);
    printf("Enter the time in years:");
    scanf("%d",&time);

    printf("Simple interst is: %d",principal*rate*time/100);
}