/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:25:29 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 14:36:39 by codespace        ###   ########.fr       */
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
		ptr = (char *)&str[a];
		return (ptr);
	}
	return (NULL);
}
