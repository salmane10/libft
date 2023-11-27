#include "libft.h"
#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (d < s)
    {
        while (n-- > 0)
        {
            *d++ = *s++;
        }
    }
    else if (d > s)
    {
        d += n;
        s += n;

        while (n-- > 0)
        {
            *(--d) = *(--s);
        }
    }

    return dest;
}