/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameliadedieu <ameliadedieu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 23:39:16 by ameliadedie       #+#    #+#             */
/*   Updated: 2019/05/18 17:10:26 by ameliadedie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char 	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	dest = malloc(sizeof(* src) * ft_strlen(src) + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
	int i;
	t_stock_par		*stock;
	
	i = 0;
	stock = malloc(sizeof(* stock) * ac + 1);
	while(i < ac)
	{
		stock->size_param = ft_strlen(av[i]);
		stock->str = av[i];
		stock->copy = ft_strdup(av[i]);
		stock->tab = ft_split_whitespaces(av[i]); 
		i++;
	}
	stock->str = 0;
	return(stock);
}
