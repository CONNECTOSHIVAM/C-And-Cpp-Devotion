// Q. Write a program to calculate the avarage of three numbers .
#include <stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the three number: ");
    scanf("%d %d %d",&a,&b,&c);
    
    float avg = (a+b+c)/3.0;
    printf("Avarage is : %.2f", avg);
    return 0;
}
