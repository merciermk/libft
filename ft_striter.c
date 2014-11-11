/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:14:57 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/11 17:29:55 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (*s && *f)
	{
		while (s[i] != '\0')
		{
			(*f)(s + i);
			i++;
		}
	}
}