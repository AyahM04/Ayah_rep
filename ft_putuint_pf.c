/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoqaily <aoqaily@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 22:30:00 by aoqaily           #+#    #+#             */
/*   Updated: 2025/12/27 22:30:00 by aoqaily          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putuint_pf(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putuint_pf(n / 10);
	count += ft_putchar_pf(n % 10 + '0');
	return (count);
}
