// write a program to print the sum of n naturals numbers.

#include <stdio.h>
int main(){

    int n = 5;
    int i = 1;
    int sum = 0;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum is: %d",sum);
    

    return 0;
}
