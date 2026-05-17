// Q4. write a function to rotate an array by n position in d direction. the d is an indicative
// value for left or right 

#include<stdio.h>
void rotateArray(int arr[],int size,int pos,int direc);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array value: ");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos,direc;
    printf("enter the position to rotate a array: ");
    scanf("%d",&pos);
    printf("enter the direction for left 1/ right -1 :");
    scanf("%d",&direc);

    rotateArray(arr,size,pos,direc);

    printf("array after rotation: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}

void rotateArray(int arr[],int size,int pos,int direc)
{
    int temp;
    if(direc==1)
    {
        while (pos)
        {
            temp = arr[size-1];
            for (int i = size-1; i > 0; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[0]=temp;
            pos--;
            
        } 
    }
    else{
        while (pos)
        {
            temp=arr[0];
            for (int i = 1; i < size-1; i++)
            {
                arr[i-1]=arr[i];
            }
            arr[size-1]=temp;
            pos--;
        }
        
    }
    
}