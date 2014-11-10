/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 20:07:49 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/10 20:18:18 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s2[0] == '\0' || s2 == NULL)
		return ((char *)s1);
	while (s1[i] && n > 0)
	{
		if (s1[i] == s2[j])
		{	j++;
			n--;
		}
		else
			j = 0;
		if (!s2[j])
			return ((char *)s1 + (i - (j - 1)));
		i++;
		n--;
	}
	return (NULL);
}
