/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:54:12 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/11 14:32:06 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*tmp;

		j = ft_strlen((char*)s);
		i = 0;
		tmp = (char*)malloc(j * sizeof(tmp));
		while (s[i] != '\0')
		{
			tmp[i] = f(s[i]);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}


