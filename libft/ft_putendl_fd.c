/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:44:30 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Outputs the string ’str’ to the given file descriptor followed by a newline.

Parameters:
str: The string to output.
fd: The file descriptor on which to write.

Return value:
None
*/

#include <unistd.h>

void	ft_putendl_fd(char *str, int fd)
{
	int	a;

	a = 0;
	if (!str)
		return ;
	while (str[a])
	{
		write(fd, &str[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}
