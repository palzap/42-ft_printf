/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:24:09 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:45:11 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	size_t	a;

	i = 0;
	if (!size)
		return (ft_strlen((char *)src));
	destlen = ft_strlen((char *)dest);
	srclen = ft_strlen((char *)src);
	a = destlen;
	if (size <= destlen)
		return (srclen + size);
	while (src[i] && i < size - destlen - 1)
		dest[a++] = src[i++];
	dest[a] = '\0';
	return (destlen + srclen);
}
