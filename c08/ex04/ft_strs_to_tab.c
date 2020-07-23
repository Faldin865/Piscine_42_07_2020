/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:38:46 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/14 17:28:54 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int							ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char						*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str			*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str			*re;
	int					i;
	int					n;

	n = 0;
	i = 0;
	if (!(re = malloc(sizeof(t_stock_str) * ac + 1)))
		return (NULL);
	while (n < ac)
	{
		if (!(re[i].str = malloc(sizeof(char) * ft_strlen(av[n]))))
			return (NULL);
		if (!(re[i].copy = malloc(sizeof(char) * ft_strlen(av[n]))))
			return (NULL);
		re[i].size = ft_strlen(av[n]);
		re[i].str = av[n];
		re[i].copy = ft_strdup(av[n]);
		n++;
		i++;
	}
	re[i].str = 0;
	return (re);
}
