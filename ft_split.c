/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salman <salman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:36:29 by slouham           #+#    #+#             */
/*   Updated: 2023/12/01 18:18:41 by salman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t  count = 0;
	int in_substr = 0;

	while (*s)
	{
		if (*s != c && in_substr == 0)
		{
			in_substr = 1;
			count++;
		}
		else if (*s == c)
			in_substr = 0;
		s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t  i;
	size_t  j;
	size_t  substr_count;
	char    **result;

	if (!s)
		return (NULL);
	substr_count = ft_count_substr(s, c);
	result = (char **)malloc((substr_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < substr_count)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		result[i] = ft_substr(s, 0, j);
		if (!result[i])
			return (NULL);
		s += j;
		i++;
	}
	result[i] = NULL;
	return (result);
}