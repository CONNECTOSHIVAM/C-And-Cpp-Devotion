// Q. Design a pattern
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    int a = 5;

    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}