/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urkamins <urkamins@student.42warsaw.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 23:02:40 by urkamins          #+#    #+#             */
/*   Updated: 2026/08/10 23:02:40 by urkamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_hex_rec(uintptr_t n, char *base, int len)
{
	if (n > 15)
		len = put_hex_rec(n / 16, base, len);
	len += put_c(base[n % 16]);
	return (len);
}

int	put_p(void *ptr, int flags)
{
	uintptr_t	p;
	int			counter;

	if (!ptr)
		return (put_s("(nil)"));
	p = (uintptr_t)ptr;
	counter = 0;
	if ((flags & 1) || (flags >> 1 & 1))
	{
		if (flags >> 1 & 1)
			counter += put_c('+');
		else
			counter += put_c(' ');
	}
	counter += put_s("0x");
	counter += put_hex_rec(p, "0123456789abcdef", 0);
	return (counter);
}
