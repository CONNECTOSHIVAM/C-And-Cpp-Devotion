//  Q. swap the value in the one line.

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    a = a + b - (b=a);
    printf("After Swapping value of a: %d || b: %d",a,b);

    return 0;
}