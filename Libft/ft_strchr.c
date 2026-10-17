/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:12:55 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/17 06:05:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == (char)c)
		{
			return ((char *)&str[x]);
		}
		x++;
	}
	if(str[x] == (char)c)
		return ((char *)&str[x]);
	return (NULL);
}
