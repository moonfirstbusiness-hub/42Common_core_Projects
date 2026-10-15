/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:16:40 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 15:54:19 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenght(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

size_t	ft_strlcat(char *des, const char *src, size_t l)
{
	size_t	x;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlenght(des);
	x = j;
	while (x < l - 1 && src[i])
	{
		des[x] = src[i];
		x++;
		i++;
	}
	des[x] = '\0';
	return (j + i);
}
