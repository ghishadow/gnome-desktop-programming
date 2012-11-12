#include <glib.h>
#include <stdio.h>

#define THIS_YEAR 2012

gint
main (gint   argc,
      gchar *argv[])
{
    gint year;
    gint now;

    /*
     * Ask what year the user was born.
     */
    g_print ("What year were you born?  ");
    scanf ("%d", &year);

    /*
     * TODO: Calculate what age the user is this year.
     */
    now = 0;

    /*
     * Print what age the user is this year.
     */
    g_print ("This year, you are %d.\n", now);

    return 0;
}
