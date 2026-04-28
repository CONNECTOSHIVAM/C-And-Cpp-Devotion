// Q5. make a question and solve on the switch case based solutions.
#include <stdio.h>
void menu();
int main()
{
    menu();
    return 0;
}

void menu()
{
    int choice;
    printf("Enter the any number(1-3) -- I ll show something special: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Good ji");
        break;
    case 2:
        printf("better hain ji");
        break;
    case 3:
        printf("best hain ji");

    default:
        printf("invalid choice");
    }
}