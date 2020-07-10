/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:31:07 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/10 11:27:54 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_count_word(char *str, char *charset)
{
	int i;
	int n;
	int word;

	word = 0;
	n = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && ft_sep(str[i], charset) == 1)
			i++;
		while (str[i] && ft_sep(str[i], charset) == 0 && ++n)
			i++;
		if (n > 0)
			word++;
	}
	return (word);
}

char		**ft_mem(char *str, char *charset, char **re)
{
	int i;
	int n;
	int x;

	x = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && ft_sep(str[i], charset) == 1)
			i++;
		while (str[i] && ft_sep(str[i], charset) == 0)
		{
			i++;
			n++;
		}
		if (n > 0)
		{
			if (!(re[x] = malloc(sizeof(char) * n)))
				return (0);
			x++;
		}
	}
	return (re);
}

char		**ft_alloc(char *str, char *charset, char **re, int i)
{
	int n;
	int x;
	int y;

	y = 0;
	i = 0;
	while (str[i] && (y <= ft_count_word(str, charset)))
	{
		x = 0;
		n = 0;
		while (str[i] && ft_sep(str[i], charset) == 1)
			i++;
		while (str[i] && ft_sep(str[i], charset) == 0 && ++n)
			i++;
		while (n > x && n > 0)
		{
			re[y][x] = str[i - (n - x)];
			x++;
		}
		if (x > 0)
			re[y][x] = '\0';
		y++;
	}
	return (re);
}

char		**ft_split(char *str, char *charset)
{
	char	**re;
	char	*src;
	int		i;

	i = 0;
	src = str;
	if (!(re = malloc(sizeof(char*) * (ft_count_word(src, charset) + 1))))
		return (0);
	re = ft_mem(src, charset, re);
	re = ft_alloc(src, charset, re, i);
	re[ft_count_word(src, charset)] = 0;
	return (re);
}
