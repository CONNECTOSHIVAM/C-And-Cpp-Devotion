// Q. find the gratest number in among three.

#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
    {
       printf("a is gratest number in entered numbers: %d",a);
    }else if(b>=a && b>=c)
    {
       printf("b is gratest number in entered numbers: %d",b);
    }else {
        printf("c is gratest number in entered numbers: %d",c);
    }

    return 0;
}