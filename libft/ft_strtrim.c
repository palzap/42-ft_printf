/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <pealexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:45:32 by pealexan          #+#    #+#             */
/*   Updated: 2022/12/07 14:54:56 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char			*strtrim;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (!str)
		return (0);
	end = ft_strlen(str);
	while (str[start] && ft_strchr((char *)set, str[start]))
		start++;
	while (end > start && ft_strchr((char *)set, str[end - 1]))
		end--;
	strtrim = ft_substr(str, start, (end - start));
	return (strtrim);
}
