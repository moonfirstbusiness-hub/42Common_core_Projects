/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:45:48 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 21:01:56 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **split)
{
	size_t	x;

	x = 0;
	while (split[x])
	{
		free(split[x]);
		x++;
	}
	free(split);
}

void	distribute(char *pre, char *suf, size_t index, char *s)
{
	size_t	x;

	x = 0;
	while (x < ft_strlen(s))
	{
		if (x < index)
			pre[x] = s[x];
		else
			suf[x - index] = s[x];
		x++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	x;
	char	*pre;
	char	*suf;
	char	**split;

	x = 0;
	index = ft_strchr(s, c);
	pre = malloc(index);
	suf = malloc(ft_strlen(s) - index);
	split = malloc(ft_strlen(s) + 1);
	if (!pre || !suf || !split)
		return (NULL);
	distribute(pre, suf, index, s);
	pre[index] = '\0';
	suf[ft_strlen(s) - index] = '\0';
	split[0] = pre;
	split[1] = suf;
	split[2] = '\0';
	return (split);
}
