#include <stdio.h>

void main ()
{
    double a, b;

    printf("Please enter two numbers separated by a space to be divided:  ");
    scanf("%lf %lf", &a, &b);

    if (b == 0.0) {
        printf("Cannot divide by zero!\n");
    } else {
        printf("%lf / %lf = %lf\n", a, b, a / b);
    }
}
