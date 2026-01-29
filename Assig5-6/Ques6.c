// Q. check a number is 3 digits or not.

#include<stdio.h>
int main(){

    int a = 456;
    int count;

    while (a>0)
    {
        int z = a%10;
        count++;
        a = a/10;
    }

    if(count==3)
    {
        printf("Enter digits length is 3");
    }else{
        printf("Enter digist length is not 3");
    }
    

    return 0;
}