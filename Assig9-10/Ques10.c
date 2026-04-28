// Q.write a program reverse a given number.

#include<stdio.h>
int main(){

    int a, rev = 0;
    printf("Enter the Number: ");
    scanf("%d",&a);

    while (a>0)
    {
        int rem =  a%10;
        rev = rev*10 + rem;
        a = a/10;
    }
    printf("reverse of the entered Number: %d",rev);
    

    return 0;
}