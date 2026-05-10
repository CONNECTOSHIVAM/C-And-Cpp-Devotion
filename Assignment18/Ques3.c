// Q3.write a program to calculate the sum of all even number and sum of all odd numbers,
// which are stored in an array of size 10. take array values from the user.
#include<stdio.h>

int main()
{
    int num[10], even=0, odd=0;

    printf("Enter the 10 numbers: \n");

    for(int i=0; i<10; i++)
    {
        scanf("%d",&num[i]);

        num[i] % 2 ? (odd += num[i]) : (even += num[i]);
    }

    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);

    return 0;
}