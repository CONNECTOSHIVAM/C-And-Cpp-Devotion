// write a program to print a cube of 10 natural numbers

#include<stdio.h>
int main(){

    int i = 1;
    while (i<=10)
    {
        printf("%d cube: %d\n",i,i*i*i);
        i++;
    }
    

    return 0;
}