/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:35:04 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/13 20:36:42 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_ifspace(size_t c)
{
	if (c == ' ')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\t')
		return (1);
	else
		return (0);
}

static	size_t		countspace(char const *s)
{
	size_t		i;

	i = 0;
	while (ft_ifspace(s[i]))
		i++;
	return (i);
}

static	size_t		countspacerev(char const *s, size_t len)
{
	if (len)
	{
		len--;
		while (ft_ifspace(s[len]) && len > 0)
			len--;
	}
	return (len);
}

char				*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		start;

	if (s)
	{
		len = countspacerev(s, ft_strlen(s));
		start = countspace(s);
		if (!len && !start)
			return (ft_strdup(s));
		else if (start == ft_strlen(s))
			return (ft_strsub(s, 0, 0));
		else
			return (ft_strsub(s, start, len - start + 1));
	}
	return (NULL);
}


