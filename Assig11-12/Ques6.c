// design the following pattern.
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include <stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
