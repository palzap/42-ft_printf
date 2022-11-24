/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:05:34 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/24 09:08:26 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}
