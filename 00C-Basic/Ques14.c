// Q. write a program to input the ASCII Code from the user and print its corresponding
// character.

#include <stdio.h>
int main()
{

    int a;
    printf("Enter the ASCII Code to get character: ");
    scanf("%d", &a);
    printf("Enter ASCII Code %d and it's character: %c", a, a);
    return 0;
}