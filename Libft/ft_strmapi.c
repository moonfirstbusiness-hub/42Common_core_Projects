/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:50:36 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/15 09:11:31 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*result;

	x = ft_strlen(s);
	result = malloc(x + 1);
	if (!result)
		return (NULL);
	result[x] = '\0';
	while (x >= 0)
	{
		result[x] = f(x, s[x]);
		x--;
	}
	return (result);
}
