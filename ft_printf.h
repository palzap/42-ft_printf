/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/28 13:33:49 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(long long nb);
int	ft_puthexa(unsigned long long nb, char c);
int	ft_putaddress(unsigned long long nb);
int	ft_putstr(char *str);
int	ft_putunsignednbr(unsigned int nb);

#endif
