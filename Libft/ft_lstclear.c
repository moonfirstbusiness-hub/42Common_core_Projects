/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:28:59 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/15 15:58:00 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	current = *lst;
	if (current != NULL && del != NULL)
	{
		while(current != NULL)
		{
			next = current->next;
			ft_lstclear(next, del);
			del(current->content);
			
		}
	}
	*lst = NULL;
}
