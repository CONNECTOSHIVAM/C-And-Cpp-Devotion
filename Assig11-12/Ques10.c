// Q.Design the following pattern.
// A B C D E
// A B C D
// A B C
// A B
// A

#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
        
    }
}