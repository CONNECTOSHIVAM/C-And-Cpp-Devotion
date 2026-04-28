// Q. without using the + and - operator.

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After Swapping value of a: %d || b: %d",a,b);
    return 0;
}