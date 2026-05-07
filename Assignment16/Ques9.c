// Q9. write a recursive function to print octal of a given decimal number.
#include<stdio.h>
void printOctal(int a);
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
        printOctal(num);
    }
    return 0;
}
void printOctal(int a)
{
    if(a==0)
    {
        return;
    }
    printOctal(a/8);
    printf("%d",a%8);
}