/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:08:34 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/07 17:20:40 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int j;

	i=0;
	j=0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0' )
	{
		j++;
	}
	return (i - j);
}

