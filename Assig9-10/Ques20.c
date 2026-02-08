// Q. find the armstrong number till 100.

#include<stdio.h>
int main()
{
  int a,sum=0;
  printf("Enter the Number: ");
  scanf("%d",&a);

  int x = a;

  int count = 0;
  while (a>0)
  {
    a = a/10;
    count++;
  }

  a = x;

  
  while (a>0)
  {
    int z = a%10;
    int mul = 1;
    for (int i = 0; i < count; i++)
    {
       mul *= z;
    }
    sum += mul;
    a = a/10;
  }

  if(x==sum)
  {
    printf("%d is the armstrong number.",x);
  }else{
    printf("%d is not armstrong number.",x);
  }
  
  return 0;
  
}