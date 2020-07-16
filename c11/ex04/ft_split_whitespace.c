/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameliadedieu <ameliadedieu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:39:30 by ameliadedie       #+#    #+#             */
/*   Updated: 2019/05/18 16:55:45 by ameliadedie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int  words;

	i = 0;
	words = 0;
	while(str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] ==  '\n') && str[i] != '\0' )
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] ==  '\n') && str[i] != '\0' )
			words++;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] ==  '\n') && str[i] != '\0' )
			i++;
	}
	return (words);
}

char	*ft_strdup2(char *src, int i)
{
	char	*dest;
	int		size;
	
	size = 0;
	while (src[i] != ' ' && src[i] != '\n' && src[i] != '\t' && src[i] != '\0')
	{
		i++;
		size++;
	}
	dest = malloc(sizeof(*dest) * size + 1);
	dest[size]  = '\0';
	while (size >= 0)
	{	
		i--;
		size--;
		dest[size] = src[i];
	}
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int x;

	tab = malloc(sizeof(char **) * ft_count_words(str) + 1);
	i = 0;
	x = 0;
	
	while (x < ft_count_words(str))
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] ==  '\n') && str[i] != '\0' )
			i++;
			tab[x] = ft_strdup2(str, i);
			x++;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] ==  '\n') && str[i] != '\0' )
			i++;	
	}
	tab[x] = 0;
	return (tab);
}

