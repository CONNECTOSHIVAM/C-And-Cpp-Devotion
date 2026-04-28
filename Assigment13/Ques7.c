// Q7. write a menu driven program with the following options.
#include <stdio.h>
#include <stdlib.h>
void menu();
int main()
{
    menu();
    return 0;
}
void menu()
{

    int select, a, sum = 1;

    while (1)
    {
        printf("\n 1.Factorial of a number ");
        printf("\n 2.Check Even or Odd");
        printf("\n 3.Area of Circle");
        printf("\n 4.Sum of first N natural numbers");
        printf("\n 5.Exit \n");
        printf("select one: ");
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &a);
            for (int i = 1; i <= a; i++)
            {
                sum *= i;
            }
            printf("Factorial is: %d", sum);
            break;

        case 2:
            printf("Enter the number: ");
            scanf("%d", &a);
            a % 2 ? "Number is odd" : "Number is even";
            break;

        case 3:
            printf("Enter the circle radius: ");
            scanf("%d", &a);

            float b = 3.14 * a * a;
            printf("Area of circle: %.2f",b);
            break;

        case 4:
            printf("Enter the n number: ");
            scanf("%d", &a);
            for (int i = 2; i <= a; i++)
            {
                sum += i;
            }
            printf("Sum of till %d is : %d", a, sum);
            break;

        case 5:
            printf("Hanji hum exit ho chuke hain.");
            exit(0);

        default:
            printf("invalid input -- try again.");
            break;
        }
    }
}