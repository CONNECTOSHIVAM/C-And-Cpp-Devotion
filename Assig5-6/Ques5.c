// Q. check the even and odd using  the bitwise operator.

#include<stdio.h>
int main(){

    int num = 5;

    if(num&1)
       printf("%d number is odd number.",num);
    else
       printf("%d number is even number.",num);

    return 0;
}