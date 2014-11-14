/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:27:36 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/14 14:06:50 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char    *ptrs;
	size_t            i;

	if (s == NULL)
		return (NULL);
	ptrs = (unsigned char *)s;
	i = 0;
	while (i < n && ptrs[i] != c)
		i++;
	if (ptrs[i] == c)
		return (ptrs + i);
	else
		return (NULL);
}
