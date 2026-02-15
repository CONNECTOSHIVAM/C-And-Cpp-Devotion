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
       char a = 'A';
       for(int j=1;j<=i;j++)
       {
          printf("%c ",a);
          a++;
       }
       a-=2;
       for(int j=i-1;j>=1;j--)
       {
         printf("%c ",a);
         a--;
       }
       printf("\n");
    }

    return 0;
}