/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_putposnbr2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:10:38 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/09 16:32:32 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_print_posnbrw2(char *number, t_buffer *values, int len)
{
	int	count;

	count = 0;
	while ((values->width--) > len)
		count += write(1, " ", 1);
	while ((values->precision--) > (int)ft_strlen(number))
		count += write(1, "0", 1);
	return (count);
}
