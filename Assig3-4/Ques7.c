// Q. swap the value without using the third varibles.
#include<stdio.h>
int main(){

    int a = 6;
    int b = 8;

   
    int c = a + b;
    a = c - a;
    b = c - b;

    printf("After the swapping the value of a : %d || b : %d",a,b);
    

    return 0;
}