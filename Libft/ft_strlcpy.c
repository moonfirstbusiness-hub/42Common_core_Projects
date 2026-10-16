/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:17:15 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 13:58:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenght(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

size_t	ft_strlcpy(char *des, const char *src, size_t l)
{
	size_t	a;
	size_t	sl;

	a = 0;
	while (a < l - 1)
	{
		des[a] = src[a];
		a++;
	}
	des[a] = '\0';
	sl = ft_strlenght(src);
	return (sl);
}
