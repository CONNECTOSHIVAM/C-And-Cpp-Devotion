// Q9. write a function to print all Armstrong numbers between 2 given numbers.

#include<stdio.h>
#include<math.h>
void armstrongList(int x, int y);
int main()
{
    int x,y;
    printf("Enter 2 number to get all armstrong number List: ");
    scanf("%d%d",&x,&y);

    armstrongList(x, y);
    return 0;
}

void armstrongList(int a,int b)
{
    for(int i=a; i<=b; i++)
    {
        int count=0, x = i, sum =0;
        while (x)
        {
            x = x/10;
            count++;
        }
        x=i;
        while (x)
        {
            int a = x%10;
            sum += (int)pow(a,count);
            x = x/10;
        }

        if(sum == i)
        {
            printf("%d ",sum);
        }
        
        
    }
}