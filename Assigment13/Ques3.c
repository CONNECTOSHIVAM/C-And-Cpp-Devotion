// Q3. write a program which takes the day number of a week and print the uniquee
// greeting message for that day..


#include<stdio.h>
int main(){

  int day;
  printf("Enter the day: ");
  scanf("%d",&day);

  switch (day)
  {
    case 1:
      printf("Happy Happy Monday -- time spent with peace.");
      break;

    case 2:
      printf("Apna Tuesday -- chale naam jaap karte hain.");
      break;

    case 3:
      printf("WoW.. Wednesday -- enjoy karte hai scripting..");
      break;

    case 4:
      printf("Elegent Thrusday -- Thus your work ...");
      break;

    case 5:
      printf("Amazing Friday -- just work work work ... ");
      break;

    case 6:
      printf("Classic satarday -- just enjoy each moments..");
      break;

    case 7:
      printf("Amazing Sunday -- just code and write...");
      break;
  
  default:
    printf("Enter the valid input (choose between 1 to 7).");
    break;
  }

  return 0;
}