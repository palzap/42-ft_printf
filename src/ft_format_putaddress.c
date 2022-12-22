/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_putaddress.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:53 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/09 16:44:36 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

static int	ft_print_zeroes(char *hexastr, t_buffer *values, int precision)
{
	int	count;
	int	len;

	count = 0;
	len = ft_strlen(hexastr);
	if (values->space || values->plus)
		len++;
	if (values->width && values->precision)
		count += ft_paddz1(hexastr, values, precision, len);
	else
		count += ft_paddz2(hexastr, values, len);
	count += ft_putstr(hexastr);
	return (count);
}

static int	ft_print_width(char *hexastr, t_buffer *values, int precision)
{
	int	count;
	int	len;

	count = 0;
	len = ft_strlen(hexastr);
	if (values->space || values->plus)
		len++;
	if (ft_strncmp(hexastr, "(nil)", 6))
		len += 2;
	if (values->width && values->precision)
		count += ft_paddw1(hexastr, values, precision, len);
	else
		count += ft_paddw2(hexastr, values, len);
	count += ft_putstr(hexastr);
	return (count);
}

static int	ft_print_minus_width2(char *hexastr, t_buffer *values, int len)
{
	int	count;

	count = 0;
	if (values->space)
		count += write(1, " ", 1);
	if (values->plus)
		count += write(1, "+", 1);
	if (ft_strncmp(hexastr, "(nil)", 6))
	{
		count += write(1, "0x", 2);
		len += 2;
	}
	while ((values->precision--) > (int)ft_strlen(hexastr))
		count += write(1, "0", 1);
	count += ft_putstr(hexastr);
	while ((values->width--) > len)
		count += write(1, " ", 1);
	return (count);
}

static int	ft_print_minus_width(char *hexastr, t_buffer *values, int precision)
{
	int	count;
	int	len;

	count = 0;
	len = ft_strlen(hexastr);
	if (values->plus || values->space)
		precision++;
	if (values->width && values->precision)
		count += ft_paddmw1(hexastr, values, precision, len);
	else
		count += ft_print_minus_width2(hexastr, values, len);
	return (count);
}

int	ft_format_putaddress(t_buffer *values, unsigned long nb)
{
	int		count;
	int		precision;
	char	*base;
	char	*hexastr;

	count = 0;
	base = "0123456789abcdef";
	if (!nb)
		hexastr = ft_strdup("(nil)");
	else
		hexastr = ft_get_hexastr(nb, base);
	precision = values->precision + 2;
	if (values->minus)
		count += ft_print_minus_width(hexastr, values, precision);
	else if (values->zero)
		count += ft_print_zeroes(hexastr, values, precision);
	else
		count += ft_print_width(hexastr, values, precision);
	free(hexastr);
	return (count);
}
