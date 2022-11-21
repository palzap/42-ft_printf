/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:27:31 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:45:26 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Applies the function ’f’ to each character of the string ’s’, and passing its 
index as first argument to create a new string (with malloc(3)) resulting from 
successive applications of ’f’.

Parameters:
s: The string on which to iterate.
f: The function to apply to each character.

Return value:
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	i = 0;
	if (!s || !f)
		return (0);
	a = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!a)
		return (0);
	while (s[i])
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
