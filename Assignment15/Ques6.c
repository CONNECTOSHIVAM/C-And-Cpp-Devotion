// Q6. write a function to print all prime number between two given numbers.
#include <stdio.h>
#include <math.h>
int isPrime();
void prime_number();
int main()
{
    int a, b;
    printf("Enter the two number to check between all prime number: ");
    scanf("%d%d", &a, &b);
    prime_number(a, b);
    return 0;
}
int isPrime(int x)
{
    if (x <= 1)
        return 0;
    if (x <= 3)
        return 1;
    if (x % 2 == 0 || x % 3 == 0)
        return 0;
    for (int i = 5; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
void prime_number(int x, int y)
{
    while (x <= y)
    {
        if (isPrime(x))
            printf("%d ", x);
        x++;
    }
}