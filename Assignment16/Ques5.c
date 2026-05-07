// Q5. write a recursive function to print first N even natural numbers.
#include <stdio.h>
void even_num(int a);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    even_num(num);
    return 0;
}
void even_num(int a)
{
    if (a == 0)
    {
        return;
    }
    even_num(a - 1);
    printf("%d ", a * 2);
}