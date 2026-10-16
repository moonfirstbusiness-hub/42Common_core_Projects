/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:51:55 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 13:35:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if(!lst || !new)
		return;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
