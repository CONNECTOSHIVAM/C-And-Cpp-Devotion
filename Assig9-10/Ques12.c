// Q. write a program to print the first n of the fibonacci serise.

#include <stdio.h>
int main()
{

    int n, a = -1, b = 1;
    printf("Enter the number:");
    scanf("%d", &n);

    int i = 0;
    printf("fibonacci of %d number : ", n);
    while (i <= n)
    {
        int temp = b;
        b = b + a;
        a = temp;
        i++;
        printf("%d ",b);

    }
    
    return 0;
}