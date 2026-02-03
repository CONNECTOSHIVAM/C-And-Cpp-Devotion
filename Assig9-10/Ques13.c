// Q13. write a program to check wheather is given number is there in the fibonacci
// serise or not.

#include<stdio.h>
int main(){

    int a=-1,b=-1,c;
    printf("Enter the number: ");
    scanf("%d",&c);

    int i = 0;
    int arr[c];
    while (i<=c)
    {
       int temp = b;
       b = a + b;
       a = temp;
       arr.push(b);
       i++;
    }

    for(int i =0;i<=arr.size();i++)
    {
        if(arr[i]==c)
        {
            printf("Yes, this number exist in fibonacci serise.");
        }else{
            
        }
    }
    

    return 0;
}