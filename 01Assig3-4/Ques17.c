// Q. write a program to take a three digits number from the user and rotate its digits 
// by one position towards the right.

#include<stdio.h>
int main(){

    int a = 156;

    int b = a%10;
    int c = a/10;
    c = b*100+c;

    printf("After shifting the value towards the right: %d",c);

    return 0;
}