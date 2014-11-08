/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:22:34 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/08 22:02:19 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *dstc;
	char *srcc; 

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dstc;

	while (srcc[i] != c && srcc[i] != '\0' && n > 0)	
	{
		i++;
		n--;
	}
	
	if (srcc[i] == c)
	{
		while (srcc[i] != '\0' )
		{
			dstc[i] = srcc[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}	
