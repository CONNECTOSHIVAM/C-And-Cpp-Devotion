// Q8. write a functions to calculate the number of arrangements one can make from 
// n items and r selected at a time.
#include<stdio.h>
int fact();
long long arrangements();
int main()
{
    int n,r;
    printf("Enter the total items(n): ");
    scanf("%d",&n);
    printf("Enter selected items(r): ");
    scanf("%d",&r);
    
    if(r>n)
    {
        printf("Invalid input - r can not be grater than n.");
    }else{
        printf("Number of total arrangements = %lld",arrangements(n, r));
    }
    return 0;
}

long long arrangements(int a, int b)
{
    return fact(a)/fact(a-b);
}

int fact(int n)
{
    int fact = 1;
    while (n>=1)
    {
        fact *= n;
        n--;
    }
    return fact;
    
}