/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:54:41 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/07 14:50:03 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_format_putchar(t_buffer *values, char c)
{
	int	count;

	count = 0;
	if (values->minus == 1)
	{
		count += write(1, &c, 1);
		while (values->width > 1)
		{
			count += write(1, " ", 1);
			values->width--;
		}
	}
	else
	{
		while (values->width > 1)
		{
			count += write(1, " ", 1);
			values->width--;
		}
		count += write(1, &c, 1);
	}
	return (count);
}
