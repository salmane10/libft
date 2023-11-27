#include "libft.h"
#include <stddef.h>

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s) + 1;
    char *dup_str = (char *)malloc(len);

    if (dup_str == NULL)
        return NULL;

    ft_memcpy(dup_str, s, len);
    return dup_str;
}