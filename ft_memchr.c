/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:27:36 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/11 18:15:34 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	int		i;

	s1 = (char*)s;
	i = 0;
	while (s1[i] != (unsigned char)c && n > 0)
	{
		i++;
		n--;
	}
	if (s1[i] == (unsigned char)c)
	{
		return ((void *)&s1[i]);
	}
	return (NULL);
}
