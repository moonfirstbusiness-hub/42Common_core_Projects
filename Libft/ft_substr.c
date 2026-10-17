/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:04:04 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/17 06:19:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sublen;

	if (!s)
		return (NULL);
	sublen = ft_strlen((const char *)&s[start]);
	substr = malloc(((sublen) + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (const char *)&s[start], sublen);
	return (substr);
}
