/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:02:29 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/22 16:29:21 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (0);
	else
		return (1);
}

int		ft_count_word(char *str)
{
	int		i;
	int		n;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && (ft_sep(str[i]) == 0))
			i++;
		while (str[i] && (ft_sep(str[i]) == 1))
		{
			i++;
			n++;
		}
		if (n > 0)
			word++;
	}
	return (word);
}

char	**ft_mem(char *str, char **re)
{
	int		i;
	int		n;
	int		y;

	y = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && (ft_sep(str[i]) == 0))
			i++;
		while (str[i] && (ft_sep(str[i]) == 1))
		{
			i++;
			n++;
		}
		if (n > 0)
		{
			if((re[y] = malloc(sizeof(char) * (n + 1))) == NULL)
				return (0);
			y++;
		}
	}
	return (re);
}

char		**ft_alloc(char *str, char **re)
{
	int		i;
	int		n;
	int		y;
	int		x;

	i = 0;
	y = 0;
	while (str[i])
	{
		n = 0;
		x = 0;
		while (str[i] && (ft_sep(str[i]) == 0))
			i++;
		while (str[i] && (ft_sep(str[i]) == 1))
		{
			i++;
			n++;
		}
		while (x < n)
		{
			re[y][x] = str[i - (n - x)];
			x++;
		}
		re[y][x] = '\0';
		y++;
	}
	return(re);
}

char	**ft_split(char *str)
{
	char	**re;

	if (*str == '\0')
		return (NULL);

	if((re = malloc(sizeof(char *) * ft_count_word(str) + 1)) == NULL)
		return (NULL);
	re = ft_mem(str, re);
	re = ft_alloc(str, re);
	re[ft_count_word(str)] = 0;
	return (re);
}
