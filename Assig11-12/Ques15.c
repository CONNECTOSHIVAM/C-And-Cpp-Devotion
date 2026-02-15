// Q. Design the following patterns.
//  A B C D E F G
//    A B C D E
//      A B C 
//        A

#include<stdio.h>
int main()
{
    int n=4;
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        char a = 'A';
        for(int j=1;j<=2*i-1;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}