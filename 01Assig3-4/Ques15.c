// Q. write a program to input from the user and also input a digits. append 
//  a  digit in the number and print the resulting number.

#include<stdio.h>
int main()
{
    int num = 123;
    int digits = 5;

    num = num*10+digits;

    printf("Value of num: %d",num);

    return 0;
}