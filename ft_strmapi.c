/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 21:58:18 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/12 22:01:02 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*strc;

		j = ft_strlen((char*)s);
		i = 0;
		strc = (char*)malloc(j * sizeof(strc));
		while (s[i] != '\0')
		{
			strc[i] = f(s[i], i);
			i++;
		}
		return (strc);
	}
	return (NULL);
}

