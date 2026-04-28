// Q2. write a menu driven program with the following options:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exit.

#include <stdio.h>
int menu();
int main()
{
  while (1)
  {
    int operation = menu();

    if (operation == 5)
    {
      printf("\n Hanji, Hum exit ho gaye hain :)");
      break;
    }

    int num1, num2;
    printf("Enter the 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operation)
    {
    case 1:
      printf("Addition is: %d", num1 + num2);
      break;

    case 2:
      printf("Subraction is: %d", num1 - num2);
      break;

    case 3:
      printf("Multiplication is: %d", num1 * num2);
      break;

    case 4:
      printf("Division is: %d", num1 / num2);
      break;

    default:
      printf("Enter the valid input -- try again.");
      break;
    }
  }
}

int menu()
{
  int operationSign;
  printf("\n");
  printf("Choose one option:\n");
  printf("1.Addition\n");
  printf("2.Subtraction\n");
  printf("3.Multiplication\n");
  printf("4.Division\n");
  printf("5.Exit\n");
  printf("Enter here : ");
  scanf("%d", &operationSign);

  return operationSign;
}