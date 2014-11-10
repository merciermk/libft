/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 09:43:34 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/10 11:24:10 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	int		i;
	int		j;
	char	*alloc;
	void	*n;

	alloc = malloc(sizeof(char) * size);
	i = 0;
	j = size;
	n = NULL;
	if (j == 0)
		return (NULL);
	if (alloc != NULL)
	{
		while (alloc[i] <= j)
		{
			alloc[i] = 0;
			i++;
		}
		return ((void*)alloc);
	}
	else
		return (n);
}
