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
            printf("    ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d   ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d   ", j);
        }
        printf("\n");
    }
    return 0;
}