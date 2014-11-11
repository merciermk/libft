/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:54:12 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/11 11:57:35 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*nstr;

		j = ft_strlen((char*)s);
		i = 0;
		nstr = (char*)malloc(j * sizeof(nstr));
		while (s[i] != '\0')
		{
			nstr[i] = f(s[i]);
			i++;
		}
		return (nstr);
	}
	return (NULL);
}


