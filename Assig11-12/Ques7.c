// Q.Design the following pattern.
// 1
// 2 3
// 4 5 6
// 7 8 9 10


#include<stdio.h>
int main(){

    for(int i = 0;i<=5;i++)
    {
        for(int j=i+1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }




    return 0;
}