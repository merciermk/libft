/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:43:24 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/10 16:13:08 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int i;
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
