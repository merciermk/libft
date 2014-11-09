/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 14:20:37 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/09 16:24:00 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (!s2)
		return((char*)s1);

	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j])
		{
			if (s1[i] == '\0')
				return((char *)s2);
			i++;
			j++;
		}
		i++;
		if (s1[i] != s2[j])
			j = 0;
	}
	return(NULL);
}
