// Q. write a program to check whether a given number positive and non-positive.

#include<stdio.h>
int main(){

    int num = 7;

    if(num>0)
    {
        printf("Entered Number %d is positive number.",num);
    }else{
        printf("Entered number %d is not a positive number.",num);
    }

    return 0;
}