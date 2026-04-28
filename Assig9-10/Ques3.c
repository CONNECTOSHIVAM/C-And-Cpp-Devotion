// Q. write a program print the sum of odd number till n naturals numbers.

#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    printf("sum of even: %d", sum);

    return 0;
}