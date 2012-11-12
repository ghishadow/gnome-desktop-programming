#include <stdio.h>

void main ()
{
    double a, b;
    char again;

    while (1) {
        printf("Please enter two numbers separated by a space to be divided:  ");
        scanf("%lf %lf", &a, &b);
        getchar();

        if (b == 0.0) {
            printf("Cannot divide by zero!\n");
        } else {
            printf("%lf / %lf = %lf\n", a, b, a / b);
        }

        printf("Would you like to calculate another? [y|n]  ");
        scanf("%c", &again);
        if (again != 'y' && again != 'Y') {
            break;
        }
    }
}
