/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:44:13 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/28 13:33:41 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args, int *count)
{
	if (c == 's')
		*count += ft_putstr(va_arg(args, char *));
	if (c == 'c')
		*count += ft_putchar(va_arg(args, int));
	if (c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		*count += ft_putunsignednbr(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		*count += ft_puthexa(va_arg(args, unsigned int), c);
	if (c == '%')
		*count += ft_putchar('%');
	if (c == 'p')
		*count += ft_putaddress(va_arg(args, unsigned long long));
	return (*count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check(*str, args, &count);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
