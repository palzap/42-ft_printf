/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:51:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/07 14:55:06 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!str)
		return (0);
	if (ft_strlen(str) <= start || !len)
		return (ft_strdup(""));
	if (ft_strlen(str) - start >= len)
		i = len + 1;
	else
		i = ft_strlen(str) - start + 1;
	substr = (char *)malloc(sizeof(char) * i);
	if (!substr)
		return (0);
	ft_strlcpy(substr, str + start, i);
	return (substr);
}
