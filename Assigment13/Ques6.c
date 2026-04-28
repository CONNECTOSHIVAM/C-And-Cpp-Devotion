// Q6. Program to find and display grade obtained by a student in a test. Grading 
// specifications are as follows:
#include<stdio.h>
void marksGrade();
int main()
{
    marksGrade();
    return 0;
}
void marksGrade(){

    int marks;
    printf("Enter your marks(0-100) to check grade: ");
    scanf("%d",&marks);

    switch (marks/10)
    {
    case 10:
        printf("Grade - A");
        break;
    case 9:
        printf("Grade - B");
        break;
    case 8:
        printf("Grade - C");
        break;
    case 7:
        printf("Grade - D");
        break;
    case 6:
        printf("Grade - E");
        break;
    case 5:
        printf("Grade - F");
        break;
    
    default:
        printf("invalid input -- enter marks(1-100)");
        break;
    }
}