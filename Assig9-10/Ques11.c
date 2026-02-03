// Q. find the fibonacci series up to n terms.

#include<stdio.h>
int main(){

    int n,a=0,b=1;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("finbonacii number of %d: %d",n,n);
    }
    else{

        int i = 2;
        while (i<=n)
        {
            int temp = b;
            b = b + a;
            a = temp;
            i++;
        }
        printf("fibonacci of %d number : %d",n,b);
    }

    return 0;
}