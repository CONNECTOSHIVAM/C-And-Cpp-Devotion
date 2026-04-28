// Q.check even and odd other number without using the % operator.

#include<stdio.h>
int main(){

    int num = 7;

    if(num/2*2==num)
    {
        printf("%d number is even.",num);
    }else{
        printf("%d number is odd.",num);
    }
}