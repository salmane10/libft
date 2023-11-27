#include "libft.h"
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    while (n-- > 0)
    {
        *d++ = *s++;
    }

    return dest;
}