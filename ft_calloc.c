#include "libft.h"
#include <stddef.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t total_size = count * size;
    void *ptr = malloc(total_size);

    if (ptr == NULL)
        return NULL;

    bzero(ptr, total_size);
    return ptr;
}