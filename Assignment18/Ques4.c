#include<stdio.h>

int main()
{
    int num[10], even=0, odd=0;

    printf("Enter the 10 numbers: ");

    for(int i=0; i<10; i++)
    {
        scanf("%d",&num[i]);

        num[i] % 2 ? odd += num[i] : even += num[i];
    }

    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d\n", odd);

    return 0;
}