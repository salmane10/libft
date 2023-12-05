#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;
    size_t  i;
    char    ptr;

    i = 0;
    if (!s1)
        return (NULL);
    if (!set)
        return (ft_strdup(s1));
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    len = end - start;
    ptr = (char)malloc((len + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    while (i < len)
    {
        ptr[i] = s1[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}