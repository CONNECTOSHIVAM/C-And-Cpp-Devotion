// Q7. write a function to print first n terms of fibonacci serise.
#include <stdio.h>
void fibo_serise(int n);
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    fibo_serise(a);
    return 0;
}
void fibo_serise(int n)
{
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}