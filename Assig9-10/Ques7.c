// Q.write a program count the digits of the given numbres.

#include<stdio.h>
int main(){

    int n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (n>0)
    {
        int z = n%10;
        count++;
        n = n/10; 
    }
    printf("size of the entered number: %d",count);
    

    return 0;
}