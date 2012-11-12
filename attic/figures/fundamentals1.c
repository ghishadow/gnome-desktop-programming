#include <glib.h>
#include <stdio.h>

gint
main (gint   argc,
      gchar *argv[])
{
    gint age;

    /*
     * Ask for, and read their age.
     */
    g_print ("How old are you?  ");
    scanf ("%d", &age);

    /*
     * Print their age in three years.
     */
    g_print ("In three years you will be %d\n", age + 3);

    return 0;
}
