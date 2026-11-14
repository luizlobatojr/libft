/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:43:17 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/14 06:41:31 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**fill_words(char **result, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = word_length(s, c);
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
			return (free_tab(result, i));
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	return (fill_words(result, s, c));
}
/*
#include <stdio.h>

static void	test(char const *s, char c)
{
	char	**r;
	int		i;

	if (s)
		printf("Entrada: \"%s\" | separador: '%c'\n", s, c);
	else
		printf("Entrada: NULL | separador: '%c'\n", c);
	r = ft_split(s, c);
	if (!r)
	{
		printf("  -> NULL\n\n");
		return ;
	}
	i = 0;
	while (r[i])
	{
		printf("  [%d] = \"%s\"\n", i, r[i]);
		free(r[i]);
		i++;
	}
	printf("  total: %d palavra(s)\n\n", i);
	free(r);
}

int	main(void)
{
	test("ola mundo", ' ');           // 2: ola, mundo
	test("  ola   mundo  42 ", ' ');  // 3: ola, mundo, 42
	test("", ' ');                    // 0
	test("     ", ' ');               // 0
	test("abc", ' ');                 // 1: abc
	test("abc", 'x');                 // 1: abc (separador não existe)
	test("xxabcxxdefxx", 'x');        // 2: abc, def
	test("a,b,c,d", ',');             // 4
	test("palavra", 'a');             // 2: p, l, vr
	test("\0aa\0bbb", '\0');          // 0 (string vazia na prática)
	test(NULL, ' ');                  // NULL
	return (0);
}*/