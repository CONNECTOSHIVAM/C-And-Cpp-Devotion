// Q. find the leap year.

#include<stdio.h>
int main(){

    int year = 1600;

    if(year%400==0 && year%100==0)
    {
        printf("%d year is leap years.",year);
    }else if(year%4==0 && year%100 != 0)
    {
        printf("%d year is leap years.",year);
    }else{
        printf("%d year is not leap years.",year);
    }

    return 0;
}