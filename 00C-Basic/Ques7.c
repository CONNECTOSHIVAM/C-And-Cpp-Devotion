// Q7. calculate the area of circle.

#include<stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("Area of circle: %.2f",pi*radius*radius);
    return 0;
}