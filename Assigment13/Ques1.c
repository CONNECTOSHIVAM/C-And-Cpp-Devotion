// Q1. write a which takes the months number as input and print the number of
// days in that month.

#include<stdio.h>
int main(){
    
    int month;
    printf("Enter months number: ");
    scanf("%d",&month);

    switch (month)
    {
    case 2:
        printf("Number of days in this months: 28 or 29");
        break;
    
    case 1: case 3: case 5: case 7: case 8 : case 10: case 12:
        printf("Number of days in this months: 31");
        break;

    case 4: case 6: case 9: case 11:
        printf("Number of days in this  months: 30");
        break;
    
    default:
        printf("Enter the valid input(choose between 1 - 12) -- try Again!");
        break;
    }

    return 0;
}