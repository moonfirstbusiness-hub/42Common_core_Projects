/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:50:24 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 16:16:03 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t len)
{
	void	*ptr;

	ptr = malloc(nmemb * len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * len);
	return (ptr);
}
