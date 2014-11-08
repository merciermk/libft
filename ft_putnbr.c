/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:18:13 by mmercier          #+#    #+#             */
/*   Updated: 2014/11/08 12:27:47 by mmercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar (n + 48);
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}
