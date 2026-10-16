/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:31:40 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/16 15:08:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	convert(char *str, int n, int x)
{
	char	sing;

	if (n < 0)
	{
		sing = '-';
		str[0] = sing;
		n *= -1;
	}
	str[x] = '\0';
	x--;
	while (n > 0)
	{
		str[x] = (n % 10) + '0';
		n = n / 10;
		x--;
	}
}

char	*ft_itoa(int n)
{
	int		x;
	int		num;
	char	*str;

	x = 1;
	num = n;
	if (n < 0)
		x++;
	while (num > 9 || num < -9)
	{
		num = num / 10;
		x++;
	}
	printf("Number of digits: %d\n", x);
	str = malloc(x + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		return (str = "0");
	convert(str, n, x);
	return (str);
}


// int main()
// {
// 	int number = -2345;
// 	char *result = ft_itoa(number);
// 	printf("The string representation of %d is: %s\n", number, result);
// 	free(result); // Don't forget to free the allocated memory
// 	return 0;
// }
