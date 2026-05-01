// Q6. write a function to calculate the factorial of number.
#include <stdio.h>
void fact();
int main()
{
    fact();
    return 0;
}
void fact()
{
    int num, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d", num, fact);
}