// Q7. write a function to calculate the number of combinations one can make from n items
// and r selected at a time.
#include<stdio.h>
int fact();
long long combinations();
int main()
{
    int n, r;
    printf("Enter the total items(n): ");
    scanf("%d",&n);
    printf("Enter Items selected(r): ");
    scanf("%d",&r);

    if(r>n)
    {
        printf("Invalid input -- r can not be grater than n.\n");
    }else{
        printf("Number of combinations = %lld",combinations(n,r));
    }
    return 0;
}

long long combinations(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
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