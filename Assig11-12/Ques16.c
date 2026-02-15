// Design the following pattern.
//  A B C D C B A
//    A B C B A
//      A B A
//        A

#include<stdio.h>
int main()
{
    int n = 4;
    for(int i=n;i>=1;i--)
    {
       for(int k=1;k<=n-i;k++)
       {
        printf("  ");
       }
    }

    return 0;
}