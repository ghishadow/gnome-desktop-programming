#include <stdio.h>

void main ()
{
    int i, j;

    for (i = 0; i < 22; i++) {
        for (j = 0; j < 80; j++) {
            if (i == 0 || i == 21 || j == 0 || j == 79) {
                printf("*");
            } else {
                printf(" ");
            }
            if (j == 79) {
                printf("\n");
            }
        }
    }
}
