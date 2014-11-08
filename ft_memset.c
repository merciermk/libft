/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:43:24 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/08 17:31:52 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*u;

	i = 0;
	u = (unsigned char *)b;

	if (!len)
	{
		while (len != 0 && u[i] != '\0' )
		{
			u[i] = c;
			i++;
			len--;
		}
	}
	return (b);
} 
