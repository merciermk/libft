/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:12:18 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/09 18:50:54 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 1;
    k = 0;
    while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n'\
                              || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' \
                              || str[i] == ' '))
        i++;
    if (str[i] == '-')
    {
        j = -1;
        i++;
    }
    if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        k = k * 10;
        k = k + (str[i] - '0');
        i++;
    }
    return (k * j);
}