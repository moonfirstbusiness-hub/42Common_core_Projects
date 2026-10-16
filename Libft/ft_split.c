/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:45:48 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 15:20:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find(const char *str, char c)
{
	size_t	x;

	x = 0;
	while(str[x])
	{
		if(c == str[x])
		return (x);
		x++;
	}
	return 0;
}

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
	char	*pre;
	char	*suf;
	char	**split;

	index = ft_find(s, c);
	pre = malloc(index);
	suf = malloc(ft_strlen(s) - index);
	split = malloc(ft_strlen(s) + 1);
	if (!pre || !suf || !split)
		return (NULL);
	distribute(pre, suf, index, (char *)s);
	pre[index] = '\0';
	suf[ft_strlen(s) - index] = '\0';
	split[0] = pre;
	split[1] = suf;
	split[2] = '\0';
	return (split);
}
