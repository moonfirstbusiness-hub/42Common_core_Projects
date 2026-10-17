/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:16:40 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/17 06:00:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenght(char *str, size_t l)
{
	int	x;

	x = 0;
	while (str[x] && x < l)
		x++;
	return (x);
}

size_t	ft_strlcat(char *des, const char *src, size_t l)
{
	size_t	x;
	size_t	i;
	size_t	j;

	if(l == 0)
		return
	i = 0;
	j = ft_strlenght(des, l);
	if(j == 0 || j == l)
		return (l + ft_strlen(src));
	x = j;
	while (x < l && src[i])
	{
		des[x] = src[i];
		x++;
		i++;
	}
	des[x] = '\0';
	return (j + i);
}
