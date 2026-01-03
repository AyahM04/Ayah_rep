/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoqaily <aoqaily@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 22:00:00 by aoqaily           #+#    #+#             */
/*   Updated: 2026/01/03 11:21:46 by aoqaily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr_pf(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthex_pf(address, 0);
	return (count);
}
