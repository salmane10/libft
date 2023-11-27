#include "libft.h"
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;
    unsigned char uc = (unsigned char)c;

    while (n-- > 0)
    {
        *ptr++ = uc;
    }
    return s;
}