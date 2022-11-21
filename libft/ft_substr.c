/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:51:03 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:45:52 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Allocates (with malloc(3)) and returns a substring from the string ’str’.
The substring begins at index ’start’ and is of maximum size ’len’.

Parameters:
str: The string from which to create the substring.
start: The start index of the substring in the string ’str’.
len: The maximum length of the substring.

Return value:
The substring (substr)'
NULL if the allocation fails.
*/

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = start;
	j = 0;
	if (!str)
		return (0);
	if (start >= ft_strlen((char *)str))
	{
		substr = malloc(sizeof(char) * 1);
		if (!substr)
			return (0);
		substr[0] = 0;
		return (substr);
	}
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (0);
	while (str[i] && j < len)
		substr[j++] = str[i++];
	substr[j] = '\0';
	return (substr);
}
