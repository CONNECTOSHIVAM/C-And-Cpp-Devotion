// Q. write a program to check wheather two given numbers are co-prime or not.


#include<stdio.h>


int gcd(int a, int b)
{
     while (b>0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}
int main()
{
    int a,b;
    printf("Enter the two number: ");
    scanf("%d %d",&a,&b);

    int c = gcd(a,b);

    if(c==1)
    {
        printf("Yes, entered Number is co-prime number.");
    }else{
        printf("No , entered Number is not co-prime number.");
    }
    
    return 0;
}