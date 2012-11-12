#include <stdio.h>

void main ()
{
    int a, b;

    printf ("Please enter two numbers separated by a space to multiply:  ");
    scanf ("%d %d", &a, &b);
    printf ("%d * %d = %d\n", a, b, a * b);
}
