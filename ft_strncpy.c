/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:26:19 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/06 19:33:04 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strncpy(char *dst, const char *src, size_t n)
{
	int tmp;

	tmp = 0;
	while (src[tmp] != '\0' && n != 0  )
	{
		dst[tmp] = src[tmp];
		tmp++;
		n--;
	}
	dst[tmp] = '\0';
	return (dst);
}

