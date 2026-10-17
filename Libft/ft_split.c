/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 19:45:48 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/17 15:54:31 by codespace        ###   ########.fr       */
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

size_t  c_word(const char * str, char c)
{
    size_t  x;
    size_t  i;

    i = 0;
    x = 0;
    while (str[x] != '\0')
    {
        if(str[x] == c && str[x + 1] != c)
        {
            i++;
            x++;
        }
        x++;
    }
    return (i + 1);
}

size_t  ft_strsize(const char *s, char c)
{
    size_t  x;

    x = 0;
    while (s[x] != c)
    {
        x++;
    }
    return (x);
}

char **ft_split(char const *s, char c)
{
    char    **split;
    size_t  i; size_t  len; size_t  x; size_t   ext;
    
    x = 0; i = 0; split = malloc((c_word(s, c) + 1) * sizeof(*split));
    if (!split)
        return NULL;
    while (i < c_word(s, c))
    {
        while(s[x] == c)
            x++;
        len = ft_strsize(&s[x], c);
        split[i] = malloc((len + 1) * sizeof(*split));
        if(!split[i])
            ft_free(split);   
        ext = ft_strlcpy(split[i], &s[x], len);
        x = x + len;
        i++;
    }
    split[i] = NULL;
    return (split);
}

int main()
{
	char const	*str = "Hello world 42 Student Awesome";
	char		**lst;
	int			x;

	lst = ft_split(str, ' ');
	//int lstlen = sizeof(lst);
	x = 0;
	while (lst[x])
	{
		printf("%s\n", lst[x]);
		x++;
	}	
}