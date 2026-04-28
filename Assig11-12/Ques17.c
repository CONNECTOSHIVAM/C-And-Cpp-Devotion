// Q. Designt the following pattern.
//          1
//        1   1
//      1   2   1
//    1   2   2   1
//  1   2   3   2   1

#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        int peak,t;
        if(i<=1) peak=1;
        else if(i<=2) peak,t=1,2;
        else if(i<=3) peak,t=2,2;
        else if(i<=4) peak,t=2,3;
        else peak=3;
        for (int j = 1; j <= peak; j++)
        {
            printf("%d   ", j);
        }
        for (int j = t - 1; j >= 1; j--)
        {
            printf("%d   ", j);
        }
        printf("\n");
    }
    return 0;
}