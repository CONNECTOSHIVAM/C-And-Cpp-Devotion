// Q. write a program to check wheather roots of a given quadratic are real & distinct,
// real and equal or imagenary roots.

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    double discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double x2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and distinct: %.2f , %.2f\n", x1, x2);
    } else if (discriminant == 0) {
        double x = -b / (2.0 * a);
        printf("Roots are real and equal: %.2f , %.2f\n", x, x);
    } else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}