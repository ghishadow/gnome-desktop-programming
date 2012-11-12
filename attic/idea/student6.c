#include <stdio.h>
#include <stdlib.h>

double
calculate (char   oper,
           double left,
           double right)
{
    switch (oper) {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    case '/':
        if (right == 0.0) {
            printf("Cannot divide by zero!\n");
            exit(1);
        }
        return left / right;
    default:
        printf("No such operator: %c\n", oper);
        exit(1);
    }
}

void main ()
{
    double a, b;
    char oper, again;

    do {
        printf("Please enter two numbers followed by -, +, * or /:  ");
        scanf("%lf %lf %c", &a, &b, &oper);
        getchar();

        printf("%lf %c %lf = %lf\n", a, oper, b, calculate(oper, a, b));

        printf("Would you like to calculate another? [y|n]  ");
        again = getchar();
    } while (again == 'y' || again == 'Y');
}
