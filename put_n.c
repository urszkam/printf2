/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_n.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urkamins <urkamins@student.42warsaw.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 23:02:40 by urkamins          #+#    #+#             */
/*   Updated: 2026/08/10 23:02:40 by urkamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_nbr_rec(long nb, int len)
{
	if (nb < 0)
	{
		len += put_c('-');
		nb = -nb;
	}
	if (nb >= 10)
		len = put_nbr_rec(nb / 10, len);
	len += put_c(nb % 10 + '0');
	return (len);
}

int	put_n(long nb, int flags, char c)
{
	int	counter;

	counter = 0;
	if (c != 'u' && nb >= 0 && ((flags & 1) || (flags >> 1 & 1)))
	{
		if (flags >> 1 & 1)
			counter += put_c('+');
		else
			counter += put_c(' ');
	}
	counter += put_nbr_rec(nb, 0);
	return (counter);
}
