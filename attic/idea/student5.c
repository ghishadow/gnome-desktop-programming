#include <stdio.h>

void main ()
{
    double a, b;
    char oper, again;

    do {
        printf("Please enter two numbers followed by -, +, * or /:  ");
        scanf("%lf %lf %c", &a, &b, &oper);
        getchar();

        switch (oper) {
        case '+':
            printf("%lf + %lf = %lf\n", a, b, a + b);
            break;
        case '-':
            printf("%lf - %lf = %lf\n", a, b, a - b);
            break;
        case '*':
            printf("%lf * %lf = %lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0.0) {
                printf("Cannot divide by zero!\n");
            } else {
                printf("%lf / %lf = %lf\n", a, b, a / b);
            }
            break;
        default:
            printf("No such operator: %c\n", oper);
        }

        printf("Would you like to calculate another? [y|n]  ");
        again = getchar();
    } while (again == 'y' || again == 'Y');
}
