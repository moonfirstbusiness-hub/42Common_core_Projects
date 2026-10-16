/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:50:36 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 15:22:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				x;
	char			*result;

	x = ft_strlen(s);
	result = malloc(x + 1);
	if (!result)
		return (NULL);
	result[x] = '\0';
	while (x >= 0)
	{
		result[x] = f((unsigned int)x, s[x]);
		x--;
	}
	return (result);
}
