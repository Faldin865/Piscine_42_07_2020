/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:34:03 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/08 14:14:27 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_h(int x)
{
	int i;

	i = 0;
	while (x > i)
	{
		ft_putchar('o');
		i++;
		while ((x - 1) > i)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_m(int x)
{
	int n;

	n = 0;
	while (x > n)
	{
		ft_putchar('|');
		n++;
		while ((x - 1) > n)
		{
			ft_putchar(' ');
			n++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		n++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		ft_print_h(x);
	while (y - 2 > i)
	{
		ft_print_m(x);
		i++;
	}
	if (y > 1)
		ft_print_h(x);
}
