// Q7.write a recursive function to calculate the HCF of 2 numbers.
#include <stdio.h>
int hcf(int x, int y);
int main()
{
    int a, b;
    printf("Enter the 2 number: ");
    scanf("%d%d", &a, &b);

    int result = hcf(a, b);
    printf("HCF(%d,%d) is: %d ", a, b, result);
    return 0;
}

int hcf(int x, int y)
{
    if(y==0)
    {
        return x;
    };
    return hcf(y,x%y);
}