// Q. write a program to check wheather roots of a given quadratic are real & distinct,
// real and equal or imagenary roots.

#include<stdio.h>
#include<math.h>
int main(){

    int a,b,c;
    printf("Enter the value of a | b | c | :");
    scanf("%d%d%d",&a,&b,&c);

    int x1 = -b + sqrt((b*b)-(4*a*c))/2*a;
    int x2 = -b - sqrt((b*b)-(4*a*c))/2*a;

    if(x1 != x2 && x1 > 0 && x2 > 0)
    {
        printf("value of x(%d,%d) real and distinct.",x1,x2);
    }else if(x1==x2){
        printf("value of x(%d,%d) real and equal.",x1,x2);
    }else{
        printf("value of x(%d,%d) are imaginary",x1,x2);
    }

    return 0;
}