// Q. write a program to calculate the HCF.

#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the two Numbers to find HCF: ");
    scanf("%d %d",&a,&b);

    while (b>0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF is: %d",a);

    return 0;
}