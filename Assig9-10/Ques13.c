// Q13. write a program to check wheather is given number is there in the fibonacci
// serise or not.

#include <stdio.h>
int main()
{

    int a = -1, b = 1, n;

    printf("Enter the Number: ");
    scanf("%d", &n);

    int i = 0;

    while (i <= n)
    {
        int temp = b;
        b = b + a;
        a = temp;
        if (b == n)
        {
            printf("Yes, %d is part of the fibonacci serise.",n);
            break;
        }
        if (b >= n)
        {
            printf("No, %d is not part of the fibonacci serise.",n);
            break;
        }
        i++;
    }

    return 0;
}