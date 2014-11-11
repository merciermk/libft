/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:43:24 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/11 18:05:18 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*u;

	u = (unsigned char *)b;
	i = 0;
	while (len != 0)
	{
		u[i] = c;
		i++;
		len--;
	}
	return (b);
}
