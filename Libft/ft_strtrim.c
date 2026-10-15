/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:47:09 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 16:46:56 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	l;
	char	*trm;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	l = ft_strlen(s1) - 1;
	while (l > x && ft_strchr(set, s1[l]))
		l--;
	trm = (char *)malloc(sizeof(char) * (l - x + 2));
	if (!trm)
		return (NULL);
	ft_strlcpy(trm, s1 + x, l - x + 2);
	return (trm);
}
