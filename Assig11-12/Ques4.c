// Q.Design a pattern
//  * * * * *
//    * * * *
//      * * *
//        * *
//          *

#include<stdio.h>
int main(){

    int a = 5;
    for(int i = 1;i<=5;i++)
    {
        for(int j=1; j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=a-i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}



