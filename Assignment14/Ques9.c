// Q9. Write a function to check wheather a given number contains a given digit or not.
#include<stdio.h>
int checkDigits();
int main()
{
    int number,digit;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter the digits: ");
    scanf("%d",&digit);

    if(checkDigits(number,digit))
    {
        printf("Yes, %d contains the digit %d",number,digit);
    }else
    {
        printf("No, %d not contain digit %d",number,digit);
    }
    return 0;
}
int checkDigits(int n,int d){

    if(n<0)
    {
        n = -n;
    }
    

    while (n>0)
    {
        int a = n%10;
        n = n/10;
        if(a==d)
        {
            return 1;
        }
    }

    return 0;
    
}