/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:33:44 by pealexan          #+#    #+#             */
/*   Updated: 2022/11/14 08:43:32 by pealexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Description:
Takes as a parameter a node and frees the memory of the node’s content using 
the function ’del’ given as a parameter and free the node. 
The memory of ’next’ must not be freed.

Parameters:
lst: The node to free.
del: The address of the function used to delete the content.

Return value:
None
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
