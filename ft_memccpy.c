/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:22:34 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/12 11:55:44 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dstc;
	char *srcc;

	srcc = (char *)src;
	dstc = (char *)dst;

	while (*srcc != '\0' && n > 0 && *srcc != c)
	{
		*dstc++ = *srcc++;
		n--;
	}
	if (*srcc == c)
		return (dstc + 1);
	else
		return (NULL);

}
