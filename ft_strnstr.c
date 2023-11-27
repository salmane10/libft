#include "libft.h"
#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len;

    needle_len = ft_strlen(needle);

    if (needle_len == 0)
        return (char *)haystack;

    while (*haystack != '\0' && len >= needle_len)
    {
        if (ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;

        haystack++;
        len--;
    }

    return NULL;
}