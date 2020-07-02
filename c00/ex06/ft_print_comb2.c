/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:54:56 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/01 10:13:54 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = 47;
	while (a++ <= '9')
	{
		b = 47;
		c = a - 1;
		while (++b <= '9')
		{
			d = b;
			while (++c <= '9')
			{
				while (++d <= '9')
					ft_print(a, b, c, d);
				d = 47;
			}
			c = a - 1;
		}
	}
}
