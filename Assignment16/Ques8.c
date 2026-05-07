// Q8. write a recursive function to print binary of a given decimal number.
#include <stdio.h>
int printBinary(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0");
    }
    else
    {
        printBinary(num);
    }
    return 0;
}
int printBinary(int a)
{
    if (a == 0)
    {
        return;
    }
    printBinary(a / 2);
    printf("%d", a % 2);
}