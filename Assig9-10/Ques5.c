// Q. write a program to calculate the sum of cubes till n natural numbers.

#include<stdio.h>
int main(){

    int n,sum=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    int i = 2;
    while(i<=n){
        sum += i*i*i;
        i++;
    }
    printf("sum of cubes till %d: %d",n,sum);

    return 0;
}