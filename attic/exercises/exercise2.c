#include <glib.h>

gint
main (gint   argc,
      gchar *argv[])
{
    gdouble numerator;

    /*
     * Ask the user for a number to process.
     */
    g_print ("Please enter a number:  ");
    scanf ("%lf", &numerator);

    /*
     * TODO: Print out the number divided by 10, 9, 6.7, 3.5, and 2.1.
     */
    g_print ("%lf / 10.0 = %f\n", numerator, numerator / 10.0);

    return 0;
}
