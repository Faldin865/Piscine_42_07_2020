/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameliadedieu <ameliadedieu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 15:36:26 by ameliadedie       #+#    #+#             */
/*   Updated: 2019/05/18 18:36:22 by ameliadedie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		if(nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb *= -1;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	ft_putchar(nb +  48);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

void	ft_print_tab(char **tab)
{
	int i;

	i = 0;
	while(tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while(par && par[i].copy)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_tab(par[i].tab);
		i++;
	}
}

int		main(int argc, char **argv)
{
	t_stock_par *stock;

	stock = ft_param_to_tab(argc, argv);
	
	ft_show_tab(stock);
	return (0);
}