/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:25:29 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 16:00:33 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	x;
	size_t	a;
	char	*ptr;

	x = 0;
	a = 0;
	while (str[x])
	{
		if (c == str[x])
			a = x;
		x++;
	}
	if (a != 0)
	{
		*ptr = str[a];
		return (ptr);
	}
	return (NULL);
}
