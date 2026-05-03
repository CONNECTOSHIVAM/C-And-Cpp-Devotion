// Q4. write a function to find a next prime number of a given number.
#include<stdio.h>
#include<math.h>
int nextPrime();
int isPrime();
int main()
{
    int num;
    printf("Enter the number to check next prime number: ");
    scanf("%d",&num);
    int result = nextPrime(num);
    printf("Next prime is : %d",result);

    return 0;
}

int isPrime(int x)
{
   if(x<=1) return 0;
   if(x<=3) return 1;

   if(x%2 == 0) return 0;

   int i=3;
   int limit = sqrt(x);
   while (i<=limit)
   {
     if(x%i==0) return 0;
     i += 2;    
   }
   return 1;

}

int nextPrime(int a)
{
    int current_number = a + 1;
    while (1)
    {
        if(isPrime(current_number))
             return current_number;

        current_number += 1;
    }
    
}