/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:04:04 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 15:07:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	substr = malloc(((len - start) + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (const char *)&s[start], len - start + 1);
	return (substr);
}
