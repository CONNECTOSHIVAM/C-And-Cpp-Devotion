// Q. write a program to calculate the factorial.

#include<stdio.h>
int main(){

    int fact = 1;
    int n = 5;
    while (n>=1)
    {
        fact *= n;
        n--;
    }
    printf("factorial is: %d",fact);

    return 0;
    

}