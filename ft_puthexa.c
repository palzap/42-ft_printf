/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:53 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/28 13:34:10 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long nb, char c)
{
	int		count;
	char	*base;

	count = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb < 16)
	{
		count += ft_putchar(base[nb]);
	}
	if (nb >= 16)
	{
		count += ft_puthexa(nb / 16, c);
		count += ft_puthexa(nb % 16, c);
	}
	return (count);
}
