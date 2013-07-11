# Implementing binary search on arrays

GLib provides many handy array classes.
GArray, GByteArray, and GPtrArray cover most use cases for arrays.
However, you might notice they don't include a binary search function.
There is a pretty simple way to do this yourself, using the __bsearch()__ function from libc.

__bsearch()__ is a generic binary search implementation that is part of libc and C89.
It should be available everywhere GLib is.

Let's implement it for GPtrArray.

```c
#include <glib.h>
#include <stdlib.h>

gpointer
g_ptr_array_bsearch (GPtrArray     *array,
                     GCompareFunc   compare_func,
                     gconstpointer  key)
{
    gpointer *ret;

    g_return_if_fail(array);
    g_return_if_fail(compare_func);

    ret = bsearch(key, array->pdata, array->len, sizeof(gpointer), compare_func);
    return ret ? *ret : NULL;
}
```

Keep in mind that your compare func will get the key as the first parameter and
the array member as the second.
