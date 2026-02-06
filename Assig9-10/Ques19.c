// Q19. write a program to check a given number is an armstrong number or not.    

#include<stdio.h>
#include<math.h>
int main()
{
    int a,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&a);

    int b = a;

    int length = (int)log10(a) + 1;

    while (a>0)
    {
        int z = a%10;
        int x = 1;
        for(int i=0;i<length;i++)
        {
          x = x*z;
        }
        sum += x;
        a = a/10;
    }
    

    if(b==sum)
    {
        printf("%d is a Armstrong Number.",b);
    }else{
        printf("%d is a not Armstrong Number.",b);
    }

    return 0;
}