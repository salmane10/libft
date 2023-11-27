#include "libft.h"
#include <stddef.h>


void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char uc = (unsigned char)c;

    while (n > 0)
    {
        if (*(unsigned char *)s == uc)
            return (void *)s;

        s++;
        n--;
    }

    return NULL;
}