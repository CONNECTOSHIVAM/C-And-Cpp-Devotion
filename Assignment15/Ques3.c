// Q3. write a function to check wheather a given number is prime or not.
#include <stdio.h>
#include <math.h>
int findPrime();
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (findPrime(a))
    {
        printf("yes, %d is Prime Number.", a);
    }
    else
    {
        printf("no, %d is not Prime Number.", a);
    }
    return 0;
}

int findPrime(int x)
{
    if (x <= 1)
        return 0;
    if (x <= 3)
        return 3;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}