// Q. print the size of all data types.

#include<stdio.h>
int main()
{
    int a = 5;
    float b = 5.1;
    double c = 5.26515;
    char s = 's';

    int p = sizeof(a);    
    int q = sizeof(b);
    int r = sizeof(c);
    int t = sizeof(s);


    printf("size of int: %d",p);
    printf("\nsize of float: %d",q);
    printf("\nsize of double: %d",r);
    printf("\nsize of char: %d",t);
    
    return 0;
}