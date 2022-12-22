/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:53 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/07 14:50:03 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_puthexa(unsigned long nb, char c)
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
