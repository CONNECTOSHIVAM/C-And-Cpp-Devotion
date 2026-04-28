#include <stdio.h>

int main() {
    // Declare the variable as 'int' to properly hold the EOF value
    int input_char; 

    printf("Please enter one character: ");
    
    // 1. Call getchar() to read the input
    input_char = getchar();
    
    // 2. Print the character read
    putchar(input_char); 
    
    printf("\n(You typed %c)", (char)input_char);
    
    return 0;
}
