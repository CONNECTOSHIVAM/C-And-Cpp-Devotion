// Q. sum of digits.

#include<stdio.h>
int main()
{
    int a = 123;
    int sum = 0;

    while (a>0)
    {
        int z = a%10;
        sum += z;
        a = a/10;
    }

    printf("%d",sum);
    

    return 0;
}