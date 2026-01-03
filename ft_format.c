/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoqaily <aoqaily@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 09:55:00 by aoqaily           #+#    #+#             */
/*   Updated: 2025/12/26 09:55:00 by aoqaily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	if (c == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_pf(va_arg(args, int)));
	if (c == 'u')
		return (ft_putuint_pf(va_arg(args, unsigned int)));
	if (c == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned int), 1));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}
