// Q.

#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("[a]:%d is grater than [b]:%d",a,b);
    }else if(a<b)
    {
        printf("[b]:%d is grater than [a]:%d",b,a);
    }else{
        printf("Value of a and b are same: [a]:%d == [b]:%d",a,b);
    }

    return 0;
}