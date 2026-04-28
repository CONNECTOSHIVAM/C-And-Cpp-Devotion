// Design the following pattern.
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <stdio.h>
int main()
{
    int n = 4;
    for (int i = 4; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}