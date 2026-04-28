// Q. write a program to input  three characters from the user and display character
// with their corresponding ASCII Codes.

#include <stdio.h>
int main()
{

    char a, b, c;
    printf("Enter the three character: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("ASCII Code Entered Character: %c ASCII Code:%d |%c ASCII Code:%d |%c ASCII Code:%d |", a, a, b, b, c, c);
    return 0;
}