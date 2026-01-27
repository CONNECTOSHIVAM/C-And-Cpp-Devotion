// Q. swap a value of 2 variables.

#include<stdio.h>
int main(){

    int a = 6;
    int b = 8;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After the swapping the value of a : %d || b : %d",a,b);
    

    return 0;
}