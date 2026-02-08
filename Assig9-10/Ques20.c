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

  printf("%d",a);
  printf("%d",count);

  return 0;
  


}