/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_*.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:00:28 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 13:01:37 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isalpha_ft(char i)
{
	if ((i <= 90 && i >= 65) || (i <= 122 && i >= 97))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	i;

	i = 'a';
	if (isalpha_ft(i))
		printf("This is an Alphabet");
	else
		printf("This is not an Alphabet");
	return (0);
}
