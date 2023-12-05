/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <salman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:36:29 by slouham           #+#    #+#             */
/*   Updated: 2023/12/01 18:18:41 by salman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  size_t  words_count(char *s , char c)
{
    size_t counter;

    counter = 0;
    while (*s)
    {
        if (*s != c)
        {
            while (*s && *s != c)
                s++;
            counter++;
        } 
        else
            s++;
    }
    return counter;
}

static  void    free_sub(char **sub_str , size_t j)
{
    while (j > 0)
        free(sub_str[--j]);
    free(sub_str);
}

static char *fill_sub(char *dest , const char *src , size_t len)
{
    size_t i;

    i = 0;
    while(len > 0)
    {
        dest[i] = src[i];
        i++;
        len--;
    }
    dest[i] = '\0';
    return (dest);
}



char    **ft_split(char const *s, char c)
{

}