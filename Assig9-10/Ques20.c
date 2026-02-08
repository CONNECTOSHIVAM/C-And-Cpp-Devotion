// Armstrong numbers till 100
#include <stdio.h>
int main()
{
    for (int num = 1; num <= 1000; num++)
    {
        int sum = 0;
        int temp = num;

        // Count digits
        int count = 0;
        int t = temp;
        while (t > 0)
        {
            t = t / 10;
            count++;
        }

        // Calculate Armstrong sum
        t = temp;
        while (t > 0)
        {
            int digit = t % 10;
            int mul = 1;
            for (int i = 0; i < count; i++)
            {
                mul *= digit;
            }
            sum += mul;
            t = t / 10;
        }

        if (sum == num)
        {
            printf("%d is an Armstrong number\n", num);
        }
    }
    return 0;
}