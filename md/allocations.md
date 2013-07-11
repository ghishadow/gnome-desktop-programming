# Reflections on Allocations

In C, allocations come in two forms.
By using some amount of your threads stack, or by using a heap allocator such as malloc() and free().
Sometimes it is hard to know which to use, so I'd like to set out some guidelines to help you make the right choice.

First, lets compare what stack and heap allocations do.

Stack allocations are very cheap and fast.
In fact, their only cost is incrementing the number of bytes in our stack frame, which will automatically be unwinded upon returning from the function.
If you perform a sufficially large allocation, you could end up going past the end of your stack space, so functions like alloca() are generally discouraged.
However, they can be very useful when working with a safe amount of data.

Heap allocations require a lot overhead to manage.
Every time you use them various information needs to be stored.
They are prone to fragmentation over time since lots of small allocations can make it difficult to find enough contiguous space for larger allocations.

# Do use heap allocations when

 * the lifetime of the structure is unknown.
 * the lifetime of the structure outlives the current function.
 * the amount of allocation required is larger than a page (4K) as you could go past your guard page and not catch a stack overflow.
 * If the structure is part of an API/ABI and could potentially change.
 * Providing an opaque implementation of a type is useful.
 * You need a reference counted structure.

# Do use stack allocations when

 * The structure is small.
 * The amount of space is limited in size and can safely be placed on the stack without overflowing.
 * You can use space within a structure most of the time and spill into a heap allocation if it grows too large.

