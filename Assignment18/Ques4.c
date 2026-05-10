// Q4. write a program to find the gratest number stored in an array of size 10. take 
// array value from the user.(for positive numbers)

#include <stdio.h>
int main()
{
    int num[10],max=0;
    printf("Enter the 10 number: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        max > num[i] ? max : (max = num[i]);
    }
    printf("Gratest number in this array : %d", max);
    return 0;
}