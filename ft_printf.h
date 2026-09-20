/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urkamins <urkamins@student.42warsaw.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 23:02:40 by urkamins          #+#    #+#             */
/*   Updated: 2026/08/10 23:02:40 by urkamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	put_c(int c);
int	put_p(void *ptr, int flags);
int	put_x(unsigned int n, int flags, char specifier);
int	put_n(long nb, int flags, char specifier);
int	put_s(char *s);

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

#endif
