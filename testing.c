#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    char *joined_str;

    joined_str = ft_strjoin(str1, str2);
    
    if (joined_str)
    {
        printf("Concatenated string: %s\n", joined_str);
        free(joined_str); // Free the memory allocated by ft_strjoin
    }
    else
    {
        printf("Concatenation failed.\n");
    }

    return 0;
}
