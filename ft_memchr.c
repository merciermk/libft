/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:27:36 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/15 11:09:29 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptrs;
	size_t				i;

	i = 0;
	ptrs = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n && ptrs[i] != c)
		i++;
	if (ptrs[i] == c)
		return (ptrs + i);
	else
		return (NULL);
}
