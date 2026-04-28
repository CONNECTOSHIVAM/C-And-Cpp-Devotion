// Q. write a program calculate the l.c.m of two numbers.

#include<stdio.h>

int gcd(int x,int y){

    while (y>0)
    {
        int temp = y;
        y = x%y;
        x = temp;
    }
    return x;
}

int main(){

    int a,b;
    printf("Enter the two Numbers: ");
    scanf("%d %d",&a,&b);

    int lcm = (a*b)/gcd(a,b);
    printf("Lcm of (%d,%d): %d",a,b,lcm);
    
    return 0;
}