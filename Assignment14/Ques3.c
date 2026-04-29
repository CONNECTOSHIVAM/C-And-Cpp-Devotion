// Q3. write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0.

#include<stdio.h>
int evenOrOdd();
int main()
{
    int result = evenOrOdd();
    if(result == 1)
    {
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}
int evenOrOdd()
{
    int userInput;
    printf("Enter the number: ");
    scanf("%d",&userInput);
    if(userInput%2)
    {
        return 0;
    }else{
        return 1;
    }
}