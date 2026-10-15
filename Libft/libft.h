/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:59:54 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/15 15:07:15 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int             ft_isalpha(int x);
int             ft_isdigit(int x);
int             ft_isalnum(int x);
int             ft_isascii(int x);
int             ft_isprint(int x);
int             ft_strlen(char *x);
void            ft_memset(void *ptr, int x, int i);
void            ft_bzero(void *ptr, int x);
void            ft_memcpy(void *des, void *src, int x);
void            ft_memmove(void *des, void *src, int x);
unsigned int    ft_strlcpy(char *des, char *src, int l);
unsigned int    ft_strlcat(char *des, char *src, int l);
char            ft_toupper(char x);
char            ft_tolower(char x);
char            *ft_strchr(char *str, char c);
char            *ft_strrchr(char *str, char c);
int             ft_strncmp(char *s1, char *s2, int n);
void            *ft_memchr(void *ptr, char c, int n);
int             ft_memcmp(void *s1, void *s2, int n);
char            *ft_strnstr(char *hay, char *needle, int len);
int             ft_atoi(char *str);
void	*ft_calloc(size_t nmemb, size_t len);
char	*strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_itoa(int n);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
unsigned int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
