/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:22:20 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/17 06:11:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlenght(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	stl;

	if(needle == NULL)
		return ((char *)hay);
	x = 0;
	i = 0;
	while (x < len && hay[x])
	{
		if (needle[i] == hay[x])
		{
			if (ft_strncmp(&hay[x], &needle[i], len) == 0)
				return ((char *)&hay[x]);
		}
		x++;
	}
	return (NULL);
}
