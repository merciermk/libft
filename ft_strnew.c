/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 11:57:11 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/10 12:00:52 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	int		i;
	int		cont;
	char	*str;

	i = 0;
	cont = size;
	str = malloc (size);
	if (str != 0)
	{
		while (str[i] <= cont)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
