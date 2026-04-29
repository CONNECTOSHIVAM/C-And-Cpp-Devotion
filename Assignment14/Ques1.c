// Q1. write a function to calculate the area of circle.
#include<stdio.h>
float areaOfCircle();
int main()
{
    float result = areaOfCircle();
    printf("Area of circle is: %.2f",result);
    return 0;
}
float areaOfCircle()
{
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d",&radius);
    float area = 3.14*radius*radius;
    return area;
}