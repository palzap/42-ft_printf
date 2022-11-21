/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:25:44 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:44:45 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the
character ’c’ as a delimiter. The array must end with a NULL pointer.

Parameters:
s: The string to be split.
c: The delimiter character.

Return value:
The array of new strings resulting from the split. NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 1;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			wordcount++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (wordcount);
}

static int	ft_wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		wdcount;
	int		j;

	j = 0;
	if (!s)
		return (0);
	wdcount = ft_countwords(s, c);
	words = malloc(sizeof(char *) * wdcount + 1);
	if (!words)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			words[j++] = ft_substr(s, 0, ft_wordlen(s, c));
		while (*s && *s != c)
			s++;
	}
	words[j] = 0;
	return (words);
}
