// Q4.write a menu driven program with the following options:
// 1.Check weather a given set of three numbers of an isosceles traingle or not.
// 2.Check weather a given set of three numbers are length of the sides of a right
// angled traingle or not.
// 3.Check weather a given set of three numbers are equiliteral traingle or not.
// 4.Exit.

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

    int choice, a, b, c;

    while (1)
    {
        printf("\n1. Check isosceles traingle");
        printf("\n2. Check right angled traingle");
        printf("\n3. Check equiliteral traingle");
        printf("\n4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the dimension of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && a + c > b)
                if (a == b || b == c || c == a)
                    printf("It is an isosceles trinagle");
                else
                    printf("It is not isosceles trinagle");

            else
                printf("invalid trinagle!");
            break;

        case 2:
            printf("Enter the dimension of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && c + a > b)
                if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
                    printf("It is an right angled triangle.");
                else
                    printf("It is not right angled triangle. ");
            else
                printf("invalid triangle.");
            break;

        case 3:
            printf("Enter the dimension of triangle:");
            scanf("%d%d%d", &a, &b, &c);
            if (a + b > c && b + c > a && c + a > b)
                if (a == b && b == c && c == a)
                    printf("It is an equiliteral traingle.");
                else
                    printf("It is not equiliteral traingle.");
            else
                printf("invalid traingle.");
            break;

        case 4:
            printf("hanji hum exit ho gaye hain.");
            exit(0);

        default:
            printf("\n Invalid choice -- retry.\n");
            break;
        }
    }
}
