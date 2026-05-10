// Q5. write a program find the smallest number stored in array size of 10(take input from user).

#include <stdio.h>
int main()
{
    int num[10];
    printf("Enter the 10 number: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    int min = num[0];
    for(int i=1;i<10;i++)
    {
        min < num[i] ? min : (min = num[i]);
    }
    printf("smallest number in this array : %d", min);
    return 0;
}