#include <stdio.h>
#include <time.h>

#define TIME_T_JAN_1_2000 946713600

int
main (int   argc,
      char *argv[])
{
    time_t t;
    time_t t2;

    t = time (NULL);

    printf ("The current time is: %lu\n", (unsigned long)t);
    printf ("It has been %lu seconds since January 1, 2000.\n",
            t - TIME_T_JAN_1_2000);

    return 0;
}
