/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:17:03 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 16:23:21 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*d;
	size_t	len;

	len = ft_strlen(s);
	d = malloc(len + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, len);
	return (d);
}
