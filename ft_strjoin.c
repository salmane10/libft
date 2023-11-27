#include "libft.h"
#include <stddef.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t ls1 = ft_strlen(s1);
    size_t ls2 = ft_strlen(s2);
    char *total;

    total = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
    if (!total)
        return (NULL);

    ft_strlcpy(total, s1, ls1 + 1);
    ft_strlcat(total + ls1, s2, ls2 + 1);

    return (total);
}