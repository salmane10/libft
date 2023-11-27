/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:31:45 by slouham           #+#    #+#             */
/*   Updated: 2023/11/13 17:31:51 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = (result * 10) + (*str - '0');
        str++;
    }

    return result * sign;
}