// // Q. write a program print the sum of squares till n naturals numbers.

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
        sum = sum + (i*i);
        i ++;
    }
    printf("sum of square till %d: %d",n, sum);

    return 0;
}