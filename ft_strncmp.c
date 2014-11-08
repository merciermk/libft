/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:08:34 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/07 17:32:24 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i=0;
	j=0;
	while (n != 0)
	{
		while (s1[i] != '\0')
			i++;

		while (s2[j] != '\0' )
			j++;
		n--;
	}
	return (i - j);

}
