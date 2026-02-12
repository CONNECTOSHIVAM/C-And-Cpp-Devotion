// Q. Design the following pattern.
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 5)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("* ");
            }
        }
        else{
           for (int j = 1; j <=5; j++)
           {
             if(j==1||j==5)
             {
                printf("* ");
             }else{
                printf("  ");
             }
           }
           
        }
    printf("\n");
    }
}