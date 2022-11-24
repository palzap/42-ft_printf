/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:54:41 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/23 17:19:50 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Outputs the character ’c’ to the given file descriptor.

Parameters:
c: The character to output.
fd: The file descriptor on which to write.

Return value:
None
*/

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
