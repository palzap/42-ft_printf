/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:54:03 by pealexan          #+#    #+#             */
/*   Updated: 2023/02/08 10:35:01 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_format
{
	char	conversion_type;
	bool	space;
	bool	zero;
	bool	plus;
	bool	minus;
	bool	hash;
	bool	point;
	int		w;
	int		prec;
}	t_buffer;

# define TYPE "%cspdiuxX"
# define FLAGS "0 +-.#"

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long long nb);
int		ft_puthexa(unsigned long nb, char c);
int		ft_putaddress(unsigned long nb);
int		ft_putstr(char *str);
int		ft_putunsignednbr(unsigned int nb);
int		ft_format_putchar(t_buffer *values, char c);
int		ft_format_lowerhexa(t_buffer *values, unsigned long long nb);
int		ft_format_upperhexa(t_buffer *values, unsigned long long nb);
int		ft_format_putstr(t_buffer *values, char *str);
int		ft_format_putaddress(t_buffer *values, unsigned long nb);
int		ft_paddmw1(char *hexastr, t_buffer *values, int prec, int len);
int		ft_paddw1(char *hexastr, t_buffer *values, int prec, int len);
int		ft_paddw2(char *hexastr, t_buffer *values, int len);
int		ft_paddz1(char *hexastr, t_buffer *values, int prec, int len);
int		ft_paddz2(char *hexastr, t_buffer *values, int len);
int		ft_format_putnbr(t_buffer *values, long long nb);
int		ft_format_putposnbr(t_buffer *values, unsigned long long nb);
int		ft_print_posnbrw2(char *number, t_buffer *values, int len);
int		ft_format_putunsignnbr(t_buffer *values, unsigned long long nb);
char	*ft_get_hexastr(unsigned long long nb, char *base);
int		ft_get_format_buffer(const char **str, va_list args);
int		ft_check_type_format(va_list args, t_buffer *values);

#endif
