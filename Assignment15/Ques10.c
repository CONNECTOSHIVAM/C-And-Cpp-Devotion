// Q10. write a function to find the sum of first N terms of the serise 1!/1+2!+2+3!+3+4!+4+
// 5!+5... n!/n .

#include<stdio.h>
long long sum_of_n(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    long long result = sum_of_n(num);
    printf("Sum of first N terms: %d",result);
    return 0;
}
long long sum_of_n(int n)
{

    long long  fact = 1;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += fact/i;
    }
    
    return sum;
}
